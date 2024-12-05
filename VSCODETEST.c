#include <stdio.h>

int main (void){
    int product;

    printf("Insert the price of a product (1000-1000000): ");
    scanf("%d\n", &product);

    if (product <= 500000 ){
        printf("Your product is expensive!");
    } else {
        printf("Your a cheap dude.");
    }
}