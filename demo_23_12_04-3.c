//
// Created by raino on 12/4/2023.
//
//while 2 循环 缓冲区见 image/demo_23_12_04-3.png

#ifdef FILE_23_12_04_3_MAIN


#include <stdio.h>


int main() {

    char password[20];
    scanf("请输入密码:>", password);
    printf("是否确认密码(Y/N)");

    //清空缓冲区  此方法不足以清空缓冲区
    // int a = getchar();

    //清空缓冲区
    int ch;
    while ( (ch = getchar()) != '\n' && ch != EOF);


    int confirm = getchar();
    if (confirm == 'Y') {
        printf("确认成功");
    } else {
        printf("确认失败");
    }

    return 0;
}

#endif
