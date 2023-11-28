//
// Created by RainoPrime on 23-11-28.
//
//生命周期
//变量的生命周期：变量创建到销毁的时间段之间
//局部变量的生命周期：进入局部范围生命周期开始，出局部范围生命周期结束
//全局变量的生命周期：程序的生命周期

#include <stdio.h>

extern int g_val;
int main() {

    {
        int a = 0;

        printf("a =  %d\n", a);
    }

    printf("g_val = %d\n", g_val);
    return 0;
}