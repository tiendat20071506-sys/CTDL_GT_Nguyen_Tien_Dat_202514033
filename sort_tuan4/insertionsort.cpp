#include <stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}
void insertionSort(int arr[], int n) {
    printf("Ban dau: ");
    printArray(arr, n);
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
        printArray(arr, n);
    }
}
int main() {
    int bandau[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = 13;
    int arr_insertion[13];
    for (int i = 0; i < n; i++) {
        arr_insertion[i] = bandau[i];
    }
    insertionSort(arr_insertion, n);
    return 0;
}
