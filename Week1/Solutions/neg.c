#include<stdio.h>
void shift(int arr[], int n)
{
    int i,j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for ( i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = { 2,4,-10,13,-7,-60,52,8,-19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    shift(arr, n);
    return 0;
}

