#include<stdio.h>
#include<conio.h>
void main(){
	int num,r,sum=0;
	printf("enter any number : ");
	scanf("%d",&num);
	do{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	while(num>0);
	printf("the sum of the digits is %d",sum);
	
	}
