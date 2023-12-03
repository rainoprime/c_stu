//
// Created by raino on 12/3/2023.
//
// typedef ���Ͷ��� ���� static �ؼ���


#ifdef FILE_23_12_03_MAIN


#include <stdio.h>

// ʹ��typedef �� unsigned int
typedef unsigned int u_int;


extern int g_int;
//static���εı����޷��������ļ��б�����
// extern int g_s_int;

extern void test_add(int a , int b);
//static���εĺ����޷��������ļ��б�����
extern void s_test_add(int a, int b);

void test() {
    int a =10;
    a++;
    printf("a��ֵΪ: %d\n", a);
}

void use_static_test() {
    static int a  = 10;
    a++;
    printf("static���� a��ֵΪ: %d\n", a);
}

int main() {

    //�����ı���δʹ��static ���α�����ÿ��ִ��a���Ľ������11
    int h = 0;
    while ( h < 10) {
        test();

        h++;
    }

    //ʹ��static���εı�����ŵ��ڴ�ľ�̬���򣬲���ÿ�ε��ú�����Ҫ���´������٣������Ϊ20
    int n = 0;
    while (n <10) {
        use_static_test();

        n ++;
    }

    //����֪��һ����������洢����������Ҫ���������ֵ�ʱ�򣬿����� unsigned �ؼ�������
    // ����д������ÿ�ζ�д unsigned int ̫�����ˣ�������Ҫtypedef�ؼ���
    unsigned int x = 100;
    u_int y = 100;

    printf("δ�򻯵�x = %d\n", x);

    printf("�򻯺��y = %d\n", y);


    //===========================================================================================
    printf("��ӡȫ�ֱ��� g_int = %d\n", g_int);
    // printf("��ӡȫ�ֱ��� g_s_int = %d\n", g_s_int); ��̬�����޷����������б�����

    test_add(h, n);

    // s_test_add(h, n); ��̬�����޷����������б�����
    return 0;
}

#endif