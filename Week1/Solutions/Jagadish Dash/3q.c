
/*Write a program that takes a number as input and prints the sum of its 
digits using a do-while loop.*/

#include <stdio.h>

void main() {
    int num, sum = 0, remainder;
    printf("Enter  number: ");
    scanf("%d", &num);
    
    do{
        remainder = num % 10;  
        sum += remainder;  
        num /= 10;  
    } while (num != 0);

    printf("The sum of digits is %d \n", sum);

}


/*Enter the number: 345
The sum of digits is 12*/