//
// Created by raino on 12/8/2023.
//
// 数组大小

#ifdef FILE_23_12_08_2_MAIN

#include <stdio.h>

int main () {

    // 打印20 ， (4,5) 实际上是在使用逗号运算符。逗号运算符（,）用于两个表达式，它先计算左边的表达式，然后计算右边的表达式，并返回右边表达式的值。
    int arr[] = {1, 2, 3, (4, 5), 6};

    printf("%d \n", sizeof arr);
    return 0;
}

#endif