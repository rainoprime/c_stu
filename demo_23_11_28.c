//
// 2023/11/28
//
//从控制台获取数据数据，并相加打印结果

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("sum = %d\n", sum);
    return 0;
}
