//
// Created by raino on 12/3/2023.
//
// ָ�� ���㵽Ϊֹ�� �������Ϊ �ڴ��ַ


#ifdef FILE_23_12_03_4_MAIN


#include <stdio.h>

int main() {

    // ����һ�� int���͵ı�����ֵΪ10
    int a = 10;

    //����a�ĵ�ַ   %p ר�Ŵ�ӡ�ڴ��ַ
    printf("����a���ڴ��ַ = %p\n", &a);

    //ȡȡ�������ڴ��ַ������ֵ��ָ����� pa     &������Ϊȡ��ַ
    int *pa = &a;

    //����ָ�� *pa Ϊ����a ���¸�ֵ
    *pa  = 100000;

    //��ӡ����a
    printf("��ָ���������ı���a��ֵΪ = %d\n", a);


    //��ǰ����ϵͳ�Լ��������Ļ����£���ͬ��������ָ����ռ�õĴ�С  32λϵͳ�� ռ�� 4�ֽڣ�  64λϵͳ�� ռ��8 �ֽڣ���Ϊֻ����ڴ��ַ�����Ժ����������޹ء�
    printf("�ռ��С = %d\n", sizeof(char*));
    printf("�ռ��С = %d\n", sizeof(short*));
    printf("�ռ��С = %d\n", sizeof(int*));
    printf("�ռ��С = %d\n", sizeof(long*));
    printf("�ռ��С = %d\n", sizeof(long long*));
    printf("�ռ��С = %d\n", sizeof(float*));
    printf("�ռ��С = %d\n", sizeof(double*));

    return 0;
}




#endif
