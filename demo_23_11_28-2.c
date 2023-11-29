//
// Created by RainoPrime on 23-11-28.
//

//作用域
//局部变量作用域：就是局部变量所在的局部范围
//全部变量作用域: 整个工程

#ifdef FILE_23_11_28-2_MAIN

#include <stdio.h>
extern int g_val;


int gl = 500;

int main() {

    printf("1 - gl =  %d\n", gl);

    {
        printf("2 - gl = %d\n", gl);

        int a = 10;

        printf("3 - a = %d\n", a);
    }

    printf("4 - gl =  %d\n", gl);

    //使用外部全局变量
    printf("5 - gl = %d\n", g_val);
}

#endif