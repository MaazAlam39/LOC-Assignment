#include <stdio.h>

void sort(int arr[], int size);

int main() {
    int arr[100], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
