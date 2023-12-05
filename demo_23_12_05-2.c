//
// Created by raino on 12/5/2023.
//

#ifdef FILE_23_12_05_2_MAIN

#include "demo_23_12_05-2.h"
#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    int c = add(a, b);

    printf("cµÄÖµÎª%d\n", c);

    return 0;
}


int add (int a, int b) {
    return a + b;
}

#endif