//
// Created by raino on 12/3/2023.
//
// �����ͺ�  (�㵽Ϊֹ��

#ifdef FILE_23_12_03_3_MAIN

#include <stdio.h>

//����һ���곣��
#define NUM 100

//����һ������ĺ�
#define ADD(x, y) x + y

#define ADD_NEW(x, y) (x + y)


int main () {

    // ��ӡ�곣��NUM
    printf("�곣��=  %d\n", NUM);

    //����ADD��
    printf("�������֮��Ϊ = %d\n", ADD(5, 4));
    //���ں���һ���ı��滻���ƣ���Ҫ�ȼӼ��ڳ˳���Ҫ�� x + y ������
    printf("�������֮��Ϊ = %d\n", 4 * ADD(5, 4));

    printf("�������֮��Ϊ = %d\n", 4 * ADD_NEW(5, 4));
    return 0;
}

#endif