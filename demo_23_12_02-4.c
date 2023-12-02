//
// Created by raino on 12/2/2023.
//
// 操作符

#ifdef FILE_23_12_02_4_MAIN

#include <stdio.h>

int main() {

    // 算数操作符
    int a = 11;
    int b = 2;

    //加
    printf("相加= %d\n", a + b);

    //相减
    printf("相减= %d\n", a - b);

    //相乘
    printf("相乘=%d\n", a * b);

    //相除 除法有余数时，因为 a b  都是int 类型，所以输出的也是int类型，当有一个变量为浮点型时，结果为5.5
    printf("相除=%d\n", a / b);

    //取余
    printf("取余=%d\n", a % b);


    // 移位操操作符，移动的是2进制位
    printf("a向左移动一位=%d\n", a << 1);

    // 移位操操作符，移动的是2进制位
    printf("a向左移动一位=%d\n", a >> 1);

    //以上为双目操作符，意思是需要有两个数参与运算
    //下面是单目操作符

    //逻辑取反
    int x = 0;
    //在c中 0为否 1为是， 当x大于1并取反时，结果都是0，当x等于0取反时，结果都是1.
    printf("x = %d\n", !x);


    //操作数的类型长度（所占字节
    int ab = 99;

    printf("类型长度所占字节=%d\n ", sizeof(ab));

    int arr[100] = {};
    printf("类型长度所占字节= %d\n", sizeof arr);

    return 0;
}

#endif
