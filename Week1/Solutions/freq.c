#include<stdio.h>

int main()
{
	char str[100];
	int i;
	printf("Enter a stringf in lower case English letter ");
	fgets(str,sizeof(str),stdin);
	 int freq[26]={0};
	 for(i=0;str[i]!='\0';i++)
	 freq[str[i]-'a']+=1;
	 printf("the frequency of characters is \n");
	 for(i=0;i<26;i++)
	 {
	 	if (freq[i]!=0)
		 {
		   char char_='a'+i;
	 	   printf("\t%c=%d\n",char_,freq[i]);
	    }
	}
	
	
	
}
