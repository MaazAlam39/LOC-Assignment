#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        printf("FIZZ\n");
        else if(i%5==0)
        printf("BUZZ\n");
        else
        printf("%d\n",i);

    }
    getch();
}



















