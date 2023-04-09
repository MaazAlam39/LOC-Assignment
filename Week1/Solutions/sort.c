#include <stdio.h>

void sort(int ar[], int n) 
{
    int i,j,k;
    for (i =0;i< n-1; i++)
	 {
        for (j =i+1;j<n; j++)
		 {
            if (ar[j]<ar[i])
			 {
                k=ar[i];
                ar[i] =ar[j];
                ar[j]=k;
            }
        }
    }
}

int main() 
{
    int ar[] = {3,4,1,2,8,6,7};
    int n = sizeof(ar)/sizeof(ar[0]);
    sort(ar,n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", ar[i]);
    printf("\n");
}

