
/*Write a program that takes a number as input and checks whether it is 
positive, negative or zero.*/

#include <stdio.h>

void main()
{
    int num; 
    printf("Enter a number to be checked \n"); 
    scanf("%d", &num);
    if(num == 0)
    {
        printf("Num is zero");
    }
    else if(num >= 0)
    {
        printf("Num is positive");
    }
    else  
    {
        printf("Num is negative");
    }
}