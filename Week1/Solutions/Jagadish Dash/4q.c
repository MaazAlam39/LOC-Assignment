/*Write a C program to enter two numbers and perform all arithmetic 
operations using switch case.*/

#include <stdio.h>

void main() {
    int num1, num2;
    char operation;

    printf("Enter two numbers \n");
    scanf("%d %d", &num1, &num2);

    printf("Chose Opertn +, -, *, /   ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Can't divie by zero\n");
            } else {
                printf("%d / %d = %f \n", num1, num2,  (float)num1 / (float)num2);
            }
            break;
        default:
            printf("Chose valid opertn\n");
            break;
    }
}