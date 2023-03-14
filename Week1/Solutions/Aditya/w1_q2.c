#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a<=0)
    {
        if(a==0)
        printf("the number is 0");
        else
        printf("the number is negative number");
    }
    else
    printf("the number is a positive number");
    return 0;
}
