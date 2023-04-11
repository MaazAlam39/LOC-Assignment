#include<stdio.h>
#include<limits.h>

void element(int *array, int size)
 {
    int i,j,maxC,maxE,c;
    maxC =INT_MIN;
   
    for(i = 0; i< size; i++)
	{
        c=1;
        for(j=i+1;j<size;j++)
		{
            if(array[j] == array[i])
			{	
                c++;
              
                if(c>maxC)
				{
                    maxC=c;
                    maxE=array[j];
                }
            }
        }
    }
    printf("Maximum Repeating Element %d\n",maxE);
	printf("Count %d",maxC);
}
  
int main() 
{
    int array[10] = {2,14,1,15,6,2,4,15,4,4};
    element(array, 10);
}
