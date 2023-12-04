//
// Created by raino on 12/4/2023.
//
// for 循环结构

#ifdef FILE_23_12_04_4_MAIN

#include <stdio.h>
int main() {
    //普通循环结构
    for (int i = 0; i < 10; i++) {
        printf("hehe\n");
    }

    // 变种
    int i = 0;
    int j = 0;
    for (i = 0, j = 0; i >= 0  && j < 10; j++, i ++) {
        printf("haha\n");
    }

    //一下只循环一次，因为  k=0 是赋值操作，0在c中永远为false
    int a = 0;
    int k = 0;
    for (a = 0, k=0; k=0; a++, k++) {
        printf("huhu\n");
    }

    return 0;
}


#endif