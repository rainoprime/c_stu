//
// Created by raino on 12/7/2023.
//
//数组指针、内存地址含义
//数组名是首元素的内存地址
//但排除两个例外
//sizeof(数组名) 虽然打印出来的还是首元素的地址，但此时的数组名表示的是整个数组。
// &数组名 虽然打印出来的还是首元素的地址，取的是整个元素的地址

#ifdef FILE_23_12_07_2_MAIN

#include <stdio.h>

//冒泡排序
void sort(int arr[], int size) {

    for (int i = 0; i< size -1; i++) {

        for (int j = 0; j < size - 1 - i; j ++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    //冒泡排序
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    for (int i = 0; i < 10; i ++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("%p\n", arr); //00000075c29ffcc0
    printf("%p\n", arr + 1); //00000075c29ffcc4


    printf("%p\n", &arr); //00000075c29ffcc0
    printf("%p\n", &arr + 1);//00000075c29ffce8
    return 0;
}

#endif
