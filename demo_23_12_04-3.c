//
// Created by raino on 12/4/2023.
//
//while 2 ѭ�� �������� image/demo_23_12_04-3.png

#ifdef FILE_23_12_04_3_MAIN


#include <stdio.h>


int main() {

    char password[20];
    scanf("����������:>", password);
    printf("�Ƿ�ȷ������(Y/N)");

    //��ջ�����  �˷�����������ջ�����
    // int a = getchar();

    //��ջ�����
    int ch;
    while ( (ch = getchar()) != '\n' && ch != EOF);


    int confirm = getchar();
    if (confirm == 'Y') {
        printf("ȷ�ϳɹ�");
    } else {
        printf("ȷ��ʧ��");
    }

    return 0;
}

#endif
