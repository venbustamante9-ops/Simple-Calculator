#include <stdio.h>
int main(){

    int number, number1, number2, sum, difference, quotient, product;

    printf("========Enter 2 number========\n");

    printf("enter 1st number: ");
    scanf("%d", &number);

    printf("enter 2nd number: ");
    scanf("%d", &number);

    sum = number1 + number2;
    difference = number + number2;
    quotient = number1 + number2;
    product = number1 + number2;

    printf("========Result=========\n");

    printf("addition: %d\n", sum);
    printf("subtraction: %d\n", difference);
    printf("division: %d\n", quotient);
    printf("product: %d\n", product);  
    return 0;
}