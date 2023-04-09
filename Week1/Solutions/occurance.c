#include<stdio.h>

int occ(int arr[], int n, int x)
{
    int i,re=0;
    for (i=0;i<n;i++)
	{
		if (x==arr[i])
		 re++;
	}
    return re;
}
int main()
{
	int c;
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    c<<occ(arr, n, x);
    return 0;
}
