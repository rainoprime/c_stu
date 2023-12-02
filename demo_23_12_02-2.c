//
// Created by raino on 12/2/2023.
//
//循环语句

#ifdef FILE23_12_02-2_MAIN

#include <stdio.h>

int main()
{
    printf("=================循环语句=================");

    int line = 0;

    while (line < 30000) {
        printf("当我在追光，我与光同行，每天进步一点点, line = %d\n", line);
        line ++;
    }

    // 循环结束时，line为30000，永远为True
    if (line >= 30000) {
        printf("青春永无悔");
    }

    return 0;
}


#endif