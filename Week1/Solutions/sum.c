#include<stdio.h>
 
 int main()
  {
    int a,b,s=0;
    printf("Enetr a number");
    scanf("%d",&a);
    do 
    {
        b=a%10;
        s=s+b;
        a=a/10;
    } while(a!=0);
     printf("Sum of allthe digits are =%d",s);
  }