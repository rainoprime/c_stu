//
// Created by raino on 12/3/2023.
//
//�����䳤���飬C99��ʼ֧�֣�  �Լ�if �ж�
#ifdef FILE_23_12_03_6_MAIN

#include <stdio.h>

int main() {

    int n = 10;
    int arr[n];

    //if �ж�
    int age = 60;

    if (age < 19) {
        printf("����");
    } else if (18 <= age <= 50) {
        // �˴� ���ж��߼���������ôд��  18 <= age �����������õ���� 1��   1<=50 �������� ����������ꡣ
        printf("����");
    } else {
        printf("����");
    }

    return 0;
}

#endif