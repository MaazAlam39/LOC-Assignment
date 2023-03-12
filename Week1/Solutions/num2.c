#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(n>0){
		printf("%d is a positive number",n);
	}
	else if(n<0){
		printf("%d is a negative number",n);
	}
	else printf("It is zero");
}
