#include <stdio.h>

int main() {
    int arr[100], size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Moving negative integer elements to one side of the array
    j = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    printf("The updated array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
