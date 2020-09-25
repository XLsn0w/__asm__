#include "InstructionRelocation/arm64/ARM64InstructionRelocation.h"

#include "core/arch/arm64/registers-arm64.h"
#include "core/modules/assembler/assembler-arm64.h"
#include "core/modules/codegen/codegen-arm64.h"

using namespace zz::arm64;

// Compare and branch.
enum CompareBranchOp {
  CompareBranchFixed     = 0x34000000,
  CompareBranchFixedMask = 0x7E000000,
  CompareBranchMask      = 0xFF000000,
};

// Conditional branch.
enum ConditionalBranchOp {
  ConditionalBranchFixed     = 0x54000000,
  ConditionalBranchFixedMask = 0xFE000000,
  ConditionalBranchMask      = 0xFF000010,
};

// Test and branch.
enum TestBranchOp {
  TestBranchFixed     = 0x36000000,
  TestBranchFixedMask = 0x7E000000,
  TestBranchMask      = 0x7F000000,
  TBZ                 = TestBranchFixed | 0x00000000,
  TBNZ                = TestBranchFixed | 0x01000000
};

static inline int64_t SignExtend(unsigned long x, int M, int N) {
#if 0
  char sign_bit      = bit(x, M - 1);
  unsigned long sign_mask = 0 - sign_bit;
  x |= ((sign_mask >> M) << M);
#else
  x = (long)(x << (N - M)) >> (N - M);
#endif
  return x;
}

#if 0
static inline unsigned long set_bit(obj, st, unsigned long bit) {
  return ((~(1 << st)) & obj) | (bit << st);
}
static inline unsigned long set_bits(obj, st, fn, unsigned long bits) {
  return ((~(submask(fn - st) << st)) & obj) | (bits << st);
}
#endif

static inline int64_t decode_imm14_offset(uint32_t instr) {
  int64_t offset;
  {
    int64_t imm19 = bits(instr, 5, 18);
    offset        = (imm19 << 2);
  }
  offset = SignExtend(offset, 2 + 14, 64);
  return offset;
}

static inline int64_t decode_imm19_offset(uint32_t instr) {
  int64_t offset;
  {
    int64_t imm19 = bits(instr, 5, 23);
    offset        = (imm19 << 2);
  }
  offset = SignExtend(offset, 2 + 19, 64);
  return offset;
}

static inline int64_t decode_imm26_offset(uint32_t instr) {
  int64_t offset;
  {
    int64_t imm26 = bits(instr, 0, 25);
    offset        = (imm26 << 2);
  }
  offset = SignExtend(offset, 2 + 26, 64);
  return offset;
}

static inline int64_t decode_immhi_immlo_offset(uint32_t instr) {
  typedef uint32_t instr_t;
  struct {
    instr_t Rd : 5;      // Destination register
    instr_t immhi : 19;  // 19-bit upper immediate
    instr_t dummy_0 : 5; // Must be 10000 == 0x10
    instr_t immlo : 2;   // 2-bit lower immediate
    instr_t op : 1;      // 0 = ADR, 1 = ADRP
  } instr_decode;

  *(instr_t *)&instr_decode = instr;

  int64_t imm = instr_decode.immlo + (instr_decode.immhi << 2);
  imm         = SignExtend(imm, 2 + 19, 64);
  return imm;
}

static inline int64_t decode_immhi_immlo_zero12_offset(uint32_t instr) {
  int64_t imm = decode_immhi_immlo_offset(instr);
  imm         = imm << 12;
  return imm;
}

static inline int decode_rt(uint32_t instr) {
  return bits(instr, 0, 4);
}

AssemblyCode *GenRelocateCode(void *buffer, int *relocate_size_ptr, addr_t from_pc, addr_t to_pc) {
  from_pc = (addr_t)buffer;

  uint64_t curr_addr    = (uint64_t)buffer;
  uint64_t curr_orig_pc = from_pc;
  uint64_t curr_relo_pc = to_pc;
  uint32_t instr        = *(uint32_t *)curr_addr;

  TurboAssembler turbo_assembler_(0);
#define _ turbo_assembler_.

  while (curr_addr < ((uint64_t)buffer + *relocate_size_ptr)) {
    int off = turbo_assembler_.GetCodeBuffer()->getSize();

    if ((instr & TestBranchFixedMask) == TestBranchFixed) { // tbz, tbnz
      addr_t branch_address               = decode_imm14_offset(instr) + curr_orig_pc;
      PseudoDataLabel *branchAddressLabel = CreatePseudoDataLabel(branch_address);
      labels->pushObject((LiteObject *)branchAddressLabel);

      uint32_t branch_instr = instr;

      char op = bit(instr, 24);
      op      = op ^ 1;
      set_bit(branch_instr, 24, op);

      int64_t offset = 4 * 3; // branch_instr; ldr x17, #label; br x17
      uint32_t imm14 = offset >> 2;
      set_bits(branch_instr, 5, 18, imm14);

      _ nop();
      {
        _ Emit(branch_instr);
        {
          _ Ldr(x17, &branchAddressLabel->label); // should we replace with `Mov` to set  X17 ?
          _ br(x17);
        }
      }
      _ nop();

    } else if ((instr & CompareBranchFixedMask) == CompareBranchFixed) { // cbz cbnz
      addr_t branch_address = decode_imm19_offset(instr) + curr_orig_pc;

      uint32_t branch_instr = instr;

      char op = bit(instr, 24);
      op      = op ^ 1;
      set_bit(branch_instr, 24, op);

      int64_t offset = 4 * 3;
      uint32_t imm19 = offset >> 2;
      set_bits(branch_instr, 5, 23, imm19);

      PseudoDataLabel *branchAddressLabel = CreatePseudoDataLabel(branch_address);
      labels->pushObject((LiteObject *)branchAddressLabel);

      _ nop();
      {
        _ Emit(branch_instr);
        {
          _ Ldr(x17, &branchAddressLabel->label); // should we replace with `Mov` to set  X17 ?
          _ br(x17);
        }
      }
      _ nop();
    } else if ((instr & ConditionalBranchFixedMask) == ConditionalBranchFixed) { // b.cond

      addr_t branch_address = decode_imm19_offset(instr) + curr_orig_pc;

      uint32_t branch_instr = instr;

      char cond = bits(instr, 0, 3);
      cond      = cond ^ 1;
      set_bits(branch_instr, 0, 3, cond);

      int64_t offset = 4 * 3;
      uint32_t imm19 = offset >> 2;
      set_bits(branch_instr, 5, 23, imm19);

      PseudoDataLabel *branchAddressLabel = CreatePseudoDataLabel(branch_address);
      labels->pushObject((LiteObject *)branchAddressLabel);

      _ nop();
      {
        _ Emit(branch_instr);
        {
          _ Ldr(x17, &branchAddressLabel->label); // should we replace with `Mov` to set  X17 ?
          _ br(x17);
        }
      }
      _ nop();
    } else {
      // origin write the instruction bytes
      _ Emit(instr);
    }

    // Move to next instruction
    curr_relo_pc += turbo_assembler_.GetCodeBuffer()->getSize() - off;
    curr_orig_pc += 4;
    curr_addr += 4;
    instr = *(arm64_inst_t *)curr_addr;
  }

  // Branch to the rest of instructions
  CodeGen codegen(&turbo_assembler_);
  codegen.LiteralLdrBranch(curr_orig_pc);

// FIXME: remove
#if 0 // NO STL
  for (auto it : labels) {
    _ PseudoBind(&(it.label));
    _ EmitInt64(it.address);
  }
#endif

  for (size_t i = 0; i < labels->getCount(); i++) {
    PseudoDataLabel *pseudoLabel = (PseudoDataLabel *)labels->getObject(i);
    _ PseudoBind(&(pseudoLabel->label));
    _ EmitInt64(pseudoLabel->address);
  }

  // Generate executable code
  AssemblyCode *code = AssemblyCode::FinalizeFromTurboAssember(&turbo_assembler_);

  // release resource
  for (size_t i = 0; i < labels->getCount(); i++) {
    PseudoDataLabel *pseudoLabel = (PseudoDataLabel *)labels->getObject(i);
    delete pseudoLabel;
  }

  return code;
}
