#include <stdio.h>

int main() {
    char num[100];
    char a;
    int i,j;
    
    printf("Enter a string ");
    gets(num);
	printf("Enter a character to remove: ");
    scanf("%c",&a);  
    for (i=j=0;num[i]!='\0';i++) 
	{
        if (num[i]!=a) {
            num[j++] =num[i];
        }
    }
    num[j] = '\0';
    printf("Modified string %s\n",num);
}
