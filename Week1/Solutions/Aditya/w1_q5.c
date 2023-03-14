#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("Enter the radius of the circle");
    scanf("%f", &r);
    d=2*r;
    printf("The Diameter of the circle is %f\n",d);
    c=2*3.14*r;
    printf("the Circumference of the circle is:%f\n" ,c);
    a=3.14*r*r;
    printf("The area of the circle is:%f\n", a);

    return 0;
}