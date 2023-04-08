#include <stdio.h>

void factorial(int num, int *result);

int main() {
    int num, result;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    factorial(num, &result);
    printf("Factorial of %d is %d", num, result);
    return 0;
}

void factorial(int num, int *result) {
    int i;
    *result = 1;
    for (i = 1; i <= num; i++) {
        *result *= i;
    }
}
