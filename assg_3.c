#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum;
    printf("Enter integer numbers:");
    scanf("%d",&num);
    sum=0;
    do {
        sum+=num%10;
        num/=10;
    } while(num>0);
    printf("The sum is =%d \n",sum);
    getch();
}