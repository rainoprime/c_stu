//
// Created by raino on 12/2/2023.
//
// 选择语句

#ifdef FILE23_12_02_MAIN

#include <stdio.h>

int main()
{
    int input = 0; //存储输入的数字

    printf("你要好好学习吗？");
    printf("1. 好好学习  2.学个球球");

    scanf("%d", &input);

    if (input == 1) {
        printf("好孩子");
    } else if (input == 2) {
        printf("回家养猪");
    } else {
        printf("什么？你不想选择？");
    }
    return 0;
}




#endif
