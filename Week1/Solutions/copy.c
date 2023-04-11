#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int ary[n], arr[n];
	printf("Enter %d elements for the first array ",n);
    for (i=0;i<n;i++) 
	{
        scanf("%d",&ary[i]);
    }
	for (i=0;i<n;i++)
	 {
        arr[i] = ary[i];
    }
	printf("Elements copied successfully from array 1 to array 2\n");
	printf("Elements of array 1:");
    for (i=0;i<n;i++) 
	{
        printf("%d ", ary[i]);
    }
    printf("\n");
	printf("Elements of array 2:");
    for (i=0;i<n;i++) 
	{
        printf("%d ", arr[i]);
    }
}

