#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a==0)
     printf("Zero");
    else if (a>0)
     printf("Positive number");
    else 
     printf("Negetive number");
}