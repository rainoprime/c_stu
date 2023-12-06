//
// Created by raino on 12/6/2023.
//
// 一维数组

#ifdef FILE_23_12_06_MAIN

#include <stdio.h>

int main() {

    // 声明一维数组
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[10] = {0}; //第一位为0.后续的是非完全初始化，默认\0

    //动态创建数组，并赋值 C99支持
    int n = 10;
    int arr4[n];
    for(int i = 0; i < n; i ++) {
        arr4[i] = i;
        printf("arr4 = %d\n", arr4[i]);
    }


    //遍历数组
    int arr5[5] = {0};
    arr5[4] = 4;
    int sz = sizeof(arr5) / sizeof(arr5[0]);
    for (int i = 0; i < sz; i++) {
        printf("%d\n", arr5[i]);
    }

    //通过指针遍历数组
    int *p = arr5;
    for (int i = 0; i < sz; i ++) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}

#endif
