//
// Created by raino on 12/2/2023.
//
// 操作符


#ifdef FILE_23_12_02_5_MAIN

#include <stdio.h>

int main() {
    // 逗号表达式
    // exp1, exp2, exp3 ...

    int a = 0;
    int b = 5;
    int c = 10;

    //最后 取的是逗号表达式最后一个表达式中的值。 12
    int d = (a = b +  5, b =  a - 4, c = b +  6 );

    printf("%d\n", d);
    return 0;
}


#endif
