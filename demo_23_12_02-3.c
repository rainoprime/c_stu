//
// Created by raino on 12/2/2023.
//
//函数 & 数组

#ifdef FILE23_12_02_3_MAIN

#include <stdio.h>

// 计算相加 编译器自上而下执行，只可写道调用者的上方
int add(int x, int y)
{
    return x + y;
}


int main() {

    int num1 = 0;
    int num2 = 0;

    printf("请输入两位数字，最后会得到他们相加之和");

    scanf("%d  %d", &num1, &num2);

    // 这是普通的相加方法
    //int count = num1 + num2;
    //使用函数
    int count = add(num1, num2);
    printf("数字之和是：%d\n", count);


    printf("=====================数组=====================\n");

    //声明数组
    int arr[5] = {1,60,45,34,66};

    //打印数组下标为1的数据
    int a = arr[0];
    printf("%d\n", a);
    //循环打印数组所有数据
    int i = 0;

    while (i < 5) {
        printf("%d,", arr[i]);
        i++;
    }

    //如果声明数组时位数不全，会使用0自动补齐
    int arr2[5] = {1, 2, 3};

    int p = 0;

    while (p < 5) {
        printf("%d,", arr2[p]);
        p++;
    }



    return 0;
}



#endif