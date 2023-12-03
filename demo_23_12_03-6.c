//
// Created by raino on 12/3/2023.
//
//创建变长数组，C99开始支持，  以及if 判断
#ifdef FILE_23_12_03_6_MAIN

#include <stdio.h>

int main() {

    int n = 10;
    int arr[n];

    //if 判断
    int age = 60;

    if (age < 19) {
        printf("青年");
    } else if (18 <= age <= 50) {
        // 此处 的判断逻辑不可以这么写，  18 <= age 满足条件，得到结果 1，   1<=50 满足条件 所以输出中年。
        printf("中年");
    } else {
        printf("老年");
    }

    return 0;
}

#endif