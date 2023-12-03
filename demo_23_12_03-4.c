//
// Created by raino on 12/3/2023.
//
// 指针 （点到为止） 可以理解为 内存地址


#ifdef FILE_23_12_03_4_MAIN


#include <stdio.h>

int main() {

    // 定义一个 int类型的变量，值为10
    int a = 10;

    //变量a的地址   %p 专门打印内存地址
    printf("变量a的内存地址 = %p\n", &a);

    //取取到他的内存地址，并赋值给指针变量 pa     &操作符为取地址
    int *pa = &a;

    //操作指针 *pa 为变量a 重新赋值
    *pa  = 100000;

    //打印变量a
    printf("经指针操作过后的变量a的值为 = %d\n", a);


    //当前操作系统以及编译器的环境下，不同数据类型指针所占用的大小  32位系统下 占用 4字节，  64位系统下 占用8 字节，因为只存放内存地址，所以和数据类型无关。
    printf("空间大小 = %d\n", sizeof(char*));
    printf("空间大小 = %d\n", sizeof(short*));
    printf("空间大小 = %d\n", sizeof(int*));
    printf("空间大小 = %d\n", sizeof(long*));
    printf("空间大小 = %d\n", sizeof(long long*));
    printf("空间大小 = %d\n", sizeof(float*));
    printf("空间大小 = %d\n", sizeof(double*));

    return 0;
}




#endif
