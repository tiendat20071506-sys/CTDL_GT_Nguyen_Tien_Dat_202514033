#include <stdio.h>
void sap_xep(int a[], int n) {
    int x = -1;
    int y = -1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            if (x == -1) {
                x = i;
                y = i + 1;
            } else {
                y = i + 1;
            }
        }
    }
    if (x != -1 && y != -1) {
        int tam = a[x];
        a[x] = a[y];
        a[y] = tam;
    }
}
void in_mang(int a[], int n) {
    printf("A[] = [");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
int main() {
    int a1[] = {3, 8, 6, 7, 5, 9};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    sap_xep(a1, n1);
    in_mang(a1, n1);
    int a2[] = {3, 5, 6, 9, 8, 7};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    sap_xep(a2, n2);
    in_mang(a2, n2);
    int a3[] = {3, 5, 7, 6, 8, 9};
    int n3 = sizeof(a3) / sizeof(a3[0]);
    sap_xep(a3, n3);
    in_mang(a3, n3);
    return 0;
}
