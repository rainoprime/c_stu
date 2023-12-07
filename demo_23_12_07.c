//
// Created by raino on 12/7/2023.
//
// 二维数组

#ifdef FILE_23_12_07_MAIN

#include <stdio.h>

int main() {

    //完全初始化
    int arr1[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    int arr2[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    //不完全初始化
    int arr3[3][5] = {1,2,3,4,5,6,7};

    //不完全初始化
    int arr4[3][4] = {{1,2}, {3, 4}, {5, 6}};


    // 打印 arr2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr2[%d][%d] = %d\n",i, j, arr2[i][j]);
        }
    }

    //打印内存地址 ，  连续的
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr2[%d][%d] = %p\n",i, j, &arr2[i][j]);
        }
    }

    int *p = arr2;
    //因为是连续的，所以可以通过指针打印
    for (int i = 0; i < 12; i ++) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}

#endif