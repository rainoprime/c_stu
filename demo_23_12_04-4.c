//
// Created by raino on 12/4/2023.
//
// for ѭ���ṹ

#ifdef FILE_23_12_04_4_MAIN

#include <stdio.h>
int main() {
    //��ͨѭ���ṹ
    for (int i = 0; i < 10; i++) {
        printf("hehe\n");
    }

    // ����
    int i = 0;
    int j = 0;
    for (i = 0, j = 0; i >= 0  && j < 10; j++, i ++) {
        printf("haha\n");
    }

    //һ��ֻѭ��һ�Σ���Ϊ  k=0 �Ǹ�ֵ������0��c����ԶΪfalse
    int a = 0;
    int k = 0;
    for (a = 0, k=0; k=0; a++, k++) {
        printf("huhu\n");
    }

    return 0;
}


#endif