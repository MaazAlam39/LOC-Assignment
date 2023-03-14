#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter a number");
    scanf("%d",&n);
    sum=0;
    do{
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    while(n>0);
    printf("The sum is =%d\n",sum);
    return 0;
}