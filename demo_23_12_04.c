//
// Created by raino on 12/4/2023.
//
// switch ???

#ifdef FILE_23_12_04_MAIN

#include <stdio.h>

int main () {
    int a = 0;
    scanf("%d", &a);
    int b = 0;
    scanf("%d", &b);
    switch (a) {
        case 1:
            printf("????\n");
        case 2:
            printf("???\n");
            break;
        case 3:
            printf("????\n");
        case 4:
            switch (b) {
                case 1:
                    printf("????\n");
                    break;;
                default:
                    break;
            }
            break;
        default:
            printf("¦Ä?\n");
            break;
    }

    return 0;
}

#endif
