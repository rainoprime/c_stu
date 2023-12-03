//
// Created by raino on 12/3/2023.
//
//使用静态修饰的变量以及函数只可在本文件中进行调用

int g_int = 100;

static g_s_int  = 200;

#include <stdio.h>
void test_add(int a, int b) {
    printf("a + b = %d\n", a + b);
    printf("来调我啊\n");
}


void s_test_add(int a, int b) {
    printf("a + b = %d\n", a + b);
    printf("调不了了吧\n");
}
