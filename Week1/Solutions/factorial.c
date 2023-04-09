#include <stdio.h>

int facts(int );
int main() {
    int i,num,fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact=facts(num);
    printf("%d! = %d\n", num, fact);
}



int facts(int n) 
{
    int i,result=1;
    for (i=2;i<=n;i++) 
	{
        result *= i;
    }
    
    return result;
}
