#include <stdio.h>  

#include<string.h>


int main()  
{  
     
   int i,vC=0,cC=0;  
   char str[100];
   printf ("Enter the sentence ");
   gets(str);
   for(i=0;i<strlen(str);i++)
   {  
       str[i]=tolower(str[i]);  
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') 
	   {  
          vC++;  
       }  
        else if(str[i]>='a'&&str[i]<='z')
		{  
           cC++;  
        }  
   }  
   printf("Number of vowels %d\n", vC);  
   printf("Number of consonant %d", cC);    
}  
