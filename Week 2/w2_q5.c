#include <stdio.h>

int main() {
    int arr1[100], arr2[100], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    // Copying elements of arr1[] to arr2[]
    for (i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of the copied array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
