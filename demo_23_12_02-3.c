//
// Created by raino on 12/2/2023.
//
//���� & ����

#ifdef FILE23_12_02_3_MAIN

#include <stdio.h>

// ������� ���������϶���ִ�У�ֻ��д�������ߵ��Ϸ�
int add(int x, int y)
{
    return x + y;
}


int main() {

    int num1 = 0;
    int num2 = 0;

    printf("��������λ���֣�����õ��������֮��");

    scanf("%d  %d", &num1, &num2);

    // ������ͨ����ӷ���
    //int count = num1 + num2;
    //ʹ�ú���
    int count = add(num1, num2);
    printf("����֮���ǣ�%d\n", count);


    printf("=====================����=====================\n");

    //��������
    int arr[5] = {1,60,45,34,66};

    //��ӡ�����±�Ϊ1������
    int a = arr[0];
    printf("%d\n", a);
    //ѭ����ӡ������������
    int i = 0;

    while (i < 5) {
        printf("%d,", arr[i]);
        i++;
    }

    //�����������ʱλ����ȫ����ʹ��0�Զ�����
    int arr2[5] = {1, 2, 3};

    int p = 0;

    while (p < 5) {
        printf("%d,", arr2[p]);
        p++;
    }



    return 0;
}



#endif