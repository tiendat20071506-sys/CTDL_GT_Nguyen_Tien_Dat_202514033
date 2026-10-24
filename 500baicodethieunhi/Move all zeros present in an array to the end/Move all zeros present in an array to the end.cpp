#include <stdio.h>
void doi_cho(int mang[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] != 0) {
            mang[k] = mang[i];
            k++;
        }
    }
    for (int i = k; i < n; i++) {
        mang[i] = 0;
    }
}
void in_mang(int mang[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}
int main() {
    int a[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Mang ban dau: ");
    in_mang(a, n);
    doi_cho(a, n);
    printf("Mang sau khi xu ly: ");
    in_mang(a, n);
    return 0;
}
