//
// Created by raino on 12/3/2023.
//
//��ʶ�ṹ��

#ifdef FILE_23_12_03_5_MAIN


#include <stdio.h>

struct student {
    char name[20]; //����
    int age;    // ����
    double source; // �ɼ�
};


int main() {

    //��ʼ���ṹ��
    struct student stu = {"����", 200, 99.95};

    // ��ӡ�ṹ������1
    printf("��ӡ�ṹ�������1�� %s  %d  %lf\n", stu.name, stu.age, stu.source);

    // ��ӡ�ṹ������2
    struct student *pa = &stu;
    printf("��ӡ�ṹ�������2�� %s  %d  %lf\n", (*pa).name, (*pa).age, (*pa).source);


    printf("��ӡ�ṹ������3��  %s  %d  %lf\n", pa->name, pa->age, pa->source);

    // �����ô�ӡ  �����ã�dereferencing���� C �����е�һ�����ָ����ͨ��ָ����ʻ��������ָ����ڴ��ַ�д洢�����ݡ�������һ��ָ�룬��������һ��������ڴ��ַ�������þ��ǻ�ȡ���޸��Ǹ���ַ�ϵ����ݡ�
    struct student stu2 = *pa;
    printf("��ӡ�ṹ������4�� %s %d %lf\n", stu2.name, stu2.age, stu2.source);
    return 0;
}

#endif