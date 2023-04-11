#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modulus\n");
    printf("Enter two number");
    scanf("%d%d",&a,&b);
     if (a>=0&&b>=0)
     {
     printf("Enter your choice");
     scanf("%d",&c);
     switch(c)
      {
        case 1:
          d=a+b;
          printf("Result is %d",d);
        break;
        case 2:
          d=a-b;
          printf("Result is %d",d);
        break;
        case 3:
          d=a*b;
          printf("Result is %d",d);
        break;
        case 4:
          d=a/b;
          printf("Result is %d",d);
        break;
        case 5:
          d=a%b;
          printf("Result is %d",d);
        break;
        default:
         printf("You are not allow to put this");
      }
     }
     else 
     printf("You are not allow to put this");
}