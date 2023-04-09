#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define strs 100 
void main()
{
    char str[strs];
    int alph,digit,splchr,i;
    alph=digit=splchr=i=0;
       printf("Enter the sentence ");
       fgets(str, sizeof str, stdin);	
  while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
          alph++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
          digit++;
        }
        else
        {
          splchr++;
        }
     i++;
    }
    printf("Number of Alphabets in the string is %d\n",alph);
    printf("Number of Digits in the string is %d\n",digit);
    printf("Number of Special characters in the string is %d",splchr);
}
