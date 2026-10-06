#include <stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}
void selectionSort(int arr[], int n) {
    printf("Ban dau: ");
    printArray(arr, n);
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        printArray(arr, n);
    }
}
int main() {
    int bandau[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59};
    int n = 13;
    int arr_selection[13];
    for (int i = 0; i < n; i++) {
        arr_selection[i] = bandau[i];
    }
    selectionSort(arr_selection, n);
    return 0;
}
