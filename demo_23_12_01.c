//
// Created by raino on 12/1/2023.
//
//转义字符

#ifdef FILE23_12_01_MAIN

#include <stdio.h>

int main () {

    // \t \a 为转义字符
    printf("%s \n", "c:\test\test\abc");

    //8进制数字  26
    printf("%s \n", "\32");

    //16进制数字 325
    printf("%s \n", "\x145");

    return 0;
}

#endif
