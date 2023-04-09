/*  Write a C program to enter the radius of a circle and find its diameter, 
circumference and area.
*/

#include <stdio.h>

void main() {
  float r, diameter, circumference, area;
  const float PI = 3.14;

  printf("Enter radius of circle");
  scanf("%f", &r);

  diameter = 2 * r;
  circumference = 2 * PI * r;
  area = PI * r * r;

  printf("diameter of circle is %f \n", diameter);
  printf("circumference of circle is %f \n", circumference);
  printf("area of circle is %f \n", area);

}

/* 
Enter radius of circle6
diameter of circle is 12.000000
circumference of circle is 37.680000
area of circle is 113.040001
*/