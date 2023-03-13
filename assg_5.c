#include<stdio.h>
#include<conio.h>
int main()
{
    float r,d,c,area;
    printf("Enter radius of circle");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    area=3.14*(r*r);
    printf("Diameter of the circle=%f\n",d);
    printf("Circumference of circle =%f\n",c);
    printf("Area of the circle= %f\n",area);
    return 0;
}