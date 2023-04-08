#include <stdio.h>

int main() {
    int arr[100], size, i, j, maxCount = 0, maxNum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Finding the maximum occurring integer in the array
    for (i = 0; i < size; i++) {
        int count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxNum = arr[i];
        }
    }
    printf("The maximum occurring integer is %d\n", maxNum);
    return 0;
}
