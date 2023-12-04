//
// Created by raino on 12/4/2023.
//
// switch 语句

#ifdef FILE_23_12_04_MAIN

#include <stdio.h>

int main () {
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    scanf("%d", &b);
    switch (a) {
        case 1:
            printf("张三\n");
        case 2:
            printf("李斯\n");
            break;
        case 3:
            printf("王五\n");
        case 4:
            switch (b) {
                case 1:
                    printf("随流\n");
                    break;;
                default:
                    break;
            }
            break;
        default:
            printf("未知\n");
            break;
    }

    return 0;
}

#endif
