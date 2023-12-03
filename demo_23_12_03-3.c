//
// Created by raino on 12/3/2023.
//
// 常量和宏  (点到为止）

#ifdef FILE_23_12_03_3_MAIN

#include <stdio.h>

//定义一个宏常量
#define NUM 100

//定义一个错误的宏
#define ADD(x, y) x + y

#define ADD_NEW(x, y) (x + y)


int main () {

    // 打印宏常量NUM
    printf("宏常量=  %d\n", NUM);

    //调用ADD宏
    printf("两数相加之和为 = %d\n", ADD(5, 4));
    //由于宏是一种文本替换机制，想要先加减在乘除需要将 x + y 括起来
    printf("两数相加之和为 = %d\n", 4 * ADD(5, 4));

    printf("两数相加之和为 = %d\n", 4 * ADD_NEW(5, 4));
    return 0;
}

#endif