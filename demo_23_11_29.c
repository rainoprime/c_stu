//
// Created by raino on 11/29/2023.
//

//常量

#include <stdio.h>

//函数外声明宏常量 不能加分号！！！！
#define MAX_STRING 200


// 声明枚举常量
// 不初始化时。默认从0开始，初始化后，从初始化开始递增
enum Sex {
    BOY,
    GIRL = 5,
    OTHER
};
int main() {

    // 字面常量
    3.1415926;
    10;
    "a";
    '2';

    //常变量，const修饰的变量为常变量
    const int n = 100;

    //n = 10;   ERROR

    // int var[n] = {0};  ERROR n不是常量所以不能作为数组的初始化个数

    printf("%d\n", n);


    //函数体内声明宏常量， 不能加分号！！！！！！！！！！！！！！！！！！！！！！！！！
    #define MAX_INT 100
    printf("%d\n", MAX_INT);


    printf("%d\n", MAX_STRING);

    //使用枚举常量
    enum Sex boy = BOY;
    enum Sex girl = GIRL;
    enum Sex other = OTHER;
    printf("%d\n", boy);
    printf("%d\n", girl);
    printf("%d\n", other);

    return 0;
}