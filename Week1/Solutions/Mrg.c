#include <stdio.h>
int main() 
{
   int a,b;
   int ary[100], arr[100];
   int mrg[300];
   int i, j, k;
   printf("Enter the size of the first array ");
   scanf("%d",&a);
   printf("Enter %d elements for the first array ",a);
   for (i = 0; i < a; i++)
     {
      scanf("%d",&ary[i]);
     }
   printf("Enter the size of the second array ");
   scanf("%d", &b);
   printf("Enter %d elements for the second array\n",b);
     for (j = 0; j <b; j++)  
      {
      scanf("%d", &arr[j]);
      }
     for (i = 0; i <a; i++) 
      {
      mrg[i] = ary[i];
      }
     for (j = 0; j <b; j++)
      {
      mrg[i+j] = arr[j];
      }
      printf("In reverse order ");
   for (k =a+b-1; k >= 0; k--)
    {
      printf("%d ", mrg[k]);
   }
}

