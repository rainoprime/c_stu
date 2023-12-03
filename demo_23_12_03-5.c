//
// Created by raino on 12/3/2023.
//
//初识结构体

#ifdef FILE_23_12_03_5_MAIN


#include <stdio.h>

struct student {
    char name[20]; //姓名
    int age;    // 年龄
    double source; // 成绩
};


int main() {

    //初始化结构体
    struct student stu = {"张三", 200, 99.95};

    // 打印结构体内容1
    printf("打印结构体的内容1： %s  %d  %lf\n", stu.name, stu.age, stu.source);

    // 打印结构体内容2
    struct student *pa = &stu;
    printf("打印结构体的内容2： %s  %d  %lf\n", (*pa).name, (*pa).age, (*pa).source);


    printf("打印结构体内容3：  %s  %d  %lf\n", pa->name, pa->age, pa->source);

    // 解引用打印  解引用（dereferencing）是 C 语言中的一个概念，指的是通过指针访问或操作它所指向的内存地址中存储的数据。当你有一个指针，它包含了一个对象的内存地址，解引用就是获取或修改那个地址上的数据。
    struct student stu2 = *pa;
    printf("打印结构体内容4： %s %d %lf\n", stu2.name, stu2.age, stu2.source);
    return 0;
}

#endif