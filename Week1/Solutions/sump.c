#include <stdio.h>

int main() 
{
    int num1,num2,sum;
    int *p1,*p2;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    p1=&num1;
    p2=&num2;
    sum=*p1+*p2;
    printf("Sum=%d",sum);
}
