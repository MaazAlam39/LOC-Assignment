#include<stdio.h>
#include<conio.h>
int main(){
	int r;
	printf("Enter the radius of the circle : ");
	scanf("%d",&r);
	printf("Diameter of the circle is %d\n",2*r);
	printf("Circumference of the circle is %f\n",2*3.14*r);
	printf("Area of the circle is %f\n",3.14*r*r);
	return 0;
}
