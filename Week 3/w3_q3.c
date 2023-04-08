#include <stdio.h>

int add(int* a, int* b);

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // read input numbers
    sum = add(&num1, &num2); // add numbers using pointers
    printf("Sum = %d\n", sum); // print the sum
    return 0;
}

int add(int* a, int* b) {
    int sum = *a + *b; // add the values pointed to by the pointers
    return sum; // return the sum
}
