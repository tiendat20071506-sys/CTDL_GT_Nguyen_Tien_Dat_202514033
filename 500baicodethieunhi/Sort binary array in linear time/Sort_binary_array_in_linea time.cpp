#include <stdio.h>
void sortBinaryArray(int arr[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            arr[k] = 0;
            k++;
        }
    }
    for (int i = k; i < n; i++) {
        arr[i] = 1;
    }
}
void printArray(int arr[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}
int main() {
    int arr[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);    
    sortBinaryArray(arr, n);
    printArray(arr, n);   
    return 0;
}
