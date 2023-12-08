//
// Created by raino on 12/8/2023.
//
// 结构体操作符

#ifdef FILE_23_12_08_MAIN

#include  <stdio.h>

struct Book {
    char name[20];
    char id[20];
    int price;

};

int main() {

    struct Book book = {"水浒传", "1", "200"};

    printf("name = %s \t id = %s \t price = %d \n", book.name, book.id, book.price);

    struct Book *bp = &book;

    printf("name = %s \t id = %s \t price = %d \n", (*bp).name, (*bp).id, (*bp).price);

    printf("name = %s \t id = %s \t price = %d \n", bp->name, bp->id, bp->price);


    return 0;
}

#endif