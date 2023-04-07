#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200], size1, size2, size, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    size = size1 + size2;
    i = 0;
    j = 0;
    while (i < size1) {
        merged[i] = arr1[i];
        i++;
    }
    while (j < size2) {
        merged[i] = arr2[j];
        i++;
        j++;
    }

    printf("Merged array in reverse order: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", merged[i]);
    }
    return 0;
}
