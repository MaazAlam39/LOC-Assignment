#include<stdio.h>
int main()
{
    int d;
    for(d=1;d<=100;d++)
    {
        if(d%3==0 & d%5==0)
        {
            printf("BUZZ FIZZ\n");
        }
        else if(d%5==0)
        {
            printf("BUZZ\n");
        }
        else if(d%3==0)
        {
            printf("FIZZ\n");
        }
        else
        {
            printf("%d\n",d);
        }
    }
}