//
// Created by raino on 12/2/2023.
//
// ѡ�����

#ifdef FILE23_12_02_MAIN

#include <stdio.h>

int main()
{
    int input = 0; //�洢���������

    printf("��Ҫ�ú�ѧϰ��");
    printf("1. �ú�ѧϰ  2.ѧ������");

    scanf("%d", &input);

    if (input == 1) {
        printf("�ú���");
    } else if (input == 2) {
        printf("�ؼ�����");
    } else {
        printf("ʲô���㲻��ѡ��");
    }
    return 0;
}




#endif
