//
//  Assembly.s
//  __asm__Dylib
//
//  Created by i on 2020/9/16.
//  Copyright © 2020 xlsn0w. All rights reserved.
//

; example.s

.section __TEXT,__text,regular,pure_instructions  ;第一行为段的固定写法
.ios_version_min 11, 2
.p2align 2
.global _double_num_times_asm   ;第四行将符号引出到全局
_double_num_times_asm:           ;第五行开始定义了符号_double_num_times_asm的功能逻辑
    lsl x0, x0, x1
    ret
