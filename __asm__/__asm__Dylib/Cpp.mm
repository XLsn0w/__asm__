//
//  Cpp.m
//  __asm__Dylib
//
//  Created by i on 2020/9/16.
//  Copyright © 2020 xlsn0w. All rights reserved.
//

#import "Cpp.h"

//调用ptrace函数可以阻止调试器依附
//为了防止函数被fishhook，我们可以将函数调用转为通过汇编发起系统调用
mov x0, #31
mov x1, #0
mov x2, #0
mov x3, #0
mov x16, #26
svc #0x80

// 其中x0-x3存储的为函数入参，x16存储的为函数编号，
// 通过Apple提供的System Call Table 可以查出ptrace的编号为26，最后一句指令发起了系统调用。
//通过使用__asm__指令能够将汇编代码嵌入我们的函数中，构成反调试方法。

// 使用inline方式将函数在调用处强制展开，防止被hook和追踪符号
static __attribute__((always_inline)) void anti_debug() {
// 判断是否是ARM64处理器指令集
#ifdef __arm64__
    // volatile修饰符能够防止汇编指令被编译器忽略
    __asm__ __volatile__(
                         "mov x0, #31\n"
                         "mov x1, #0\n"
                         "mov x2, #0\n"
                         "mov x3, #0\n"
                         "mov x16, #26\n"
                         "svc #0x80\n"
                         );
#endif
}
