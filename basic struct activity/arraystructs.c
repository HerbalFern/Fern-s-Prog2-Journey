#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};


int main(){

    struct Book books_3[3];
    
    for (int i = 0; i < 3; i++){
        printf("Enter Book %d title: ", i+1);
        scanf("%s", books_3[i].title);
        printf("Enter Book %d author: ", i+1);
        scanf("%s", books_3[i].author);
        printf("Enter Book %d price: ", i+1);
        scanf("%f", &books_3[i].price);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++){
        printf("Book %d Title: %s\n", i+1, books_3[i].title);
        printf("Book %d author: %s\n", i+1, books_3[i].author);
        printf("Book %d price: %.2f\n", i+1, books_3[i].price);
    }


    return 0;
}