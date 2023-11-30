//
// Created by raino on 11/30/2023.
//
//字符串
//字符串结束标志并不算字符串长度

#ifdef FILE_23_11_30_MAIN

#include <stdio.h>
#include <string.h>

int main () {

    // 字符数组 - 数组是一组同类型的数据
    "print";
    "3.1415926";

    //声明正确的字符数组，长度可以隐藏
    char arr[4] = "abc";
    //打印长度
    const int arr_len = strlen(arr);

    //长度设置为3  编译器不会在字符串结束时隐士添加\0结束标志，导致字符数组长度以及内容并不准确。   \0   \000(八进制）  均为结束标志
    char arr1[3] = "abc";
    const int arr1_len = strlen(arr1);

    // 当逐个定义字符时，需要显式的写明字符串结束标志，不然字符数组arr2的内容和长度与实际不符，编译器会在内存中无限寻找，直到找到结束标志为止。
    char arr2 [] = {'a', 'b', 'c'};
    const int arr2_len = strlen(arr2);

    // 正确定义诸葛字符数组
    char arr3[] = {'a', 'b', 'c', '\000'};
    const int arr3_len = strlen(arr3);


    printf("%s\n", arr);
    printf("%d\n", arr_len);

    printf("%s\n", arr1);
    printf("%d\n", arr1_len);

    printf("%s\n", arr2);
    printf("%d\n", arr2_len);

    printf("%s\n", arr3);
    printf("%d\n", arr3_len);

    return 0;
};


#endif