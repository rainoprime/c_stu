//
// Created by raino on 12/5/2023.
//
//ʹ�ÿ⺯��

#ifdef FILE_23_12_05_MAIN

#include <stdio.h>
#include <string.h>

int main() {
    //�����ַ���
    char arr1[20] = {0};
    char arr2[55] = "hellow World";

    strcpy(arr1, arr2);

    printf("%s\n", arr1);


    // �ڴ�����
    char arr3[20] = "yyds  hello world";
    memset(arr3, "x", 5);

    printf("%s\n", arr3);
    return 0;
}

#endif