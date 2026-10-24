#include <stdio.h>
void tim_mang(int a[], int n) {
    int tong_max = a[0];
    int tong_ht = a[0];
    int dau = 0;
    int cuoi = 0;
    int tam = 0;
    for (int i = 1; i < n; i++) {
        if (tong_ht < 0) {
            tong_ht = a[i];
            tam = i;
        } else {
            tong_ht += a[i];
        }
        if (tong_ht > tong_max) {
            tong_max = tong_ht;
            dau = tam;
            cuoi = i;
        }
    }
    printf("The contiguous subarray with the largest sum is {");
    for (int i = dau; i <= cuoi; i++) {
        printf("%d", a[i]);
        if (i < cuoi) {
            printf(", ");
        }
    }
    printf("}\n");
}
int main() {
    int a1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    tim_mang(a1, n1);
    int a2[] = {8, -7, -3, 5, 6, -2, 3, -4, 2};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    tim_mang(a2, n2);
    return 0;
}
