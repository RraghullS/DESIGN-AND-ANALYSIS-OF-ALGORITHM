#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0, swapped = 1; swapped; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}, n = sizeof(arr) / sizeof(arr[0]);

    printf("Original: "); printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted: "); printArray(arr, n);

    return 0;
}