#include<stdio.h>

int main()
{
    float a,b,c,r;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    a=3.14*r*r;
    b=r*2;
    c=2*3.14*r;
    printf("Diameter of the circle is %f\n",b);
    printf("Circumference of the circle is %f\n",c);
    printf("Area of the circle is %f",a);
}