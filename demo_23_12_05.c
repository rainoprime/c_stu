//
// Created by raino on 12/5/2023.
//
//使用库函数

#ifdef FILE_23_12_05_MAIN

#include <stdio.h>
#include <string.h>

int main() {
    //拷贝字符串
    char arr1[20] = {0};
    char arr2[55] = "hellow World";

    strcpy(arr1, arr2);

    printf("%s\n", arr1);


    // 内存设置
    char arr3[20] = "yyds  hello world";
    memset(arr3, "x", 5);

    printf("%s\n", arr3);
    return 0;
}

#endif