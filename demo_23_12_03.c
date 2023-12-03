//
// Created by raino on 12/3/2023.
//
// typedef 类型定义 、、 static 关键字


#ifdef FILE_23_12_03_MAIN


#include <stdio.h>

// 使用typedef 简化 unsigned int
typedef unsigned int u_int;


extern int g_int;
//static修饰的变量无法在其他文件中被引入
// extern int g_s_int;

extern void test_add(int a , int b);
//static修饰的函数无法在其他文件中被引入
extern void s_test_add(int a, int b);

void test() {
    int a =10;
    a++;
    printf("a的值为: %d\n", a);
}

void use_static_test() {
    static int a  = 10;
    a++;
    printf("static修饰 a的值为: %d\n", a);
}

int main() {

    //函数的变量未使用static 修饰变量，每次执行a最后的结果都是11
    int h = 0;
    while ( h < 10) {
        test();

        h++;
    }

    //使用static修饰的变量会放到内存的静态区域，不会每次调用函数都要重新创建销毁，最后结果为20
    int n = 0;
    while (n <10) {
        use_static_test();

        n ++;
    }

    //当我知道一个变量不会存储负数，且需要存更大的数字的时候，可以用 unsigned 关键字修饰
    // 正常写法，但每次都写 unsigned int 太复杂了，所以需要typedef关键子
    unsigned int x = 100;
    u_int y = 100;

    printf("未简化的x = %d\n", x);

    printf("简化后的y = %d\n", y);


    //===========================================================================================
    printf("打印全局变量 g_int = %d\n", g_int);
    // printf("打印全局变量 g_s_int = %d\n", g_s_int); 静态变量无法在其他类中被引入

    test_add(h, n);

    // s_test_add(h, n); 静态函数无法在其它类中被引入
    return 0;
}

#endif