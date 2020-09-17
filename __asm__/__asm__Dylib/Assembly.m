//
//  Assembly.m
//  __asm__Dylib
//
//  Created by i on 2020/9/16.
//  Copyright © 2020 xlsn0w. All rights reserved.
//

#import "Assembly.h"
#include <stdio.h>
//#import "Assembly.s"

int test(int a, int b) {
  int res = a + b;
  return res;
}

int main() {
  int res = test(1, 2);
  return 0;
}

@implementation Assembly

// Assembly.h
int double_num_times_asm(int num, int times);

int double_num(int num) {
    __asm__ __volatile__(
        "lsl x0, x0, 1\n"
        "str x0, [sp, #12]\n"
    );
    return num;
}

@end

//iOS设备主要使用的为ARM64汇编，因此本文主要介绍ARM64汇编的入门技巧。 汇编入门最难的地方在于对栈的理解，汇编的所有指令操作都是围绕栈实现的，在汇编中，没有变量的概念，只有寄存器和内存。

//sub用于对寄存器实施减法，sub a, b, c等价于a = b - c，在ARM汇编中，目的操作数一般出现最前方，例如mov ra, rb 代表将rb寄存器的值复制到ra寄存器。add和sub同理，只是将减法变成了加法。

//str和ldr是一对指令，str的全称是store register，即将寄存器的值存储到内存中，

//ldr的全称是load register，即将内存中的值读到寄存器，因此他们的第一个参数都是寄存器，第二个参数都是内存地址。

//[sp, #12] 代表sp+12 这个地址，同理[sp, #-12] 代表sp-12 这个地址。注意这里的数字都是以字节为单位的偏移量，以str w0, [sp, #12] 为例，w是4字节的寄存器，这个指令代表将w0寄存器的值存储在sp+12这个地址上，由于w0有4个字节，所以存储后会占据sp+12~sp+16这个内存区域。


