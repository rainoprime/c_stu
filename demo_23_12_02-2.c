//
// Created by raino on 12/2/2023.
//
//ѭ�����

#ifdef FILE23_12_02-2_MAIN

#include <stdio.h>

int main()
{
    printf("=================ѭ�����=================");

    int line = 0;

    while (line < 30000) {
        printf("������׷�⣬�����ͬ�У�ÿ�����һ���, line = %d\n", line);
        line ++;
    }

    // ѭ������ʱ��lineΪ30000����ԶΪTrue
    if (line >= 30000) {
        printf("�ഺ���޻�");
    }

    return 0;
}


#endif