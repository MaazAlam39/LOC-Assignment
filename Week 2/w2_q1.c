#include <stdio.h>

int countOccurrences(int arr[], int size, int num);

int main() {
    int arr[100], size, num, count;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to count its occurrences: ");
    scanf("%d", &num);
    count = countOccurrences(arr, size, num);
    printf("The number %d occurs %d times in the array.", num, count);
    return 0;
}

int countOccurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}
