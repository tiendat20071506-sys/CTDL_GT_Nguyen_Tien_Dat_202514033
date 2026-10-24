#include <stdio.h>
void thaythe(int mang[], int n) {
    int ketqua[n]; 
    int i;
    int tichphai = 1;
    ketqua[0] = 1;
    for (i = 1; i < n; i++) {
        ketqua[i] = mang[i - 1] * ketqua[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {
        ketqua[i] = ketqua[i] * tichphai;
        tichphai = tichphai * mang[i];
    }
    for (i = 0; i < n; i++) {
        mang[i] = ketqua[i];
    }
}
void in_mang(int mang[], int n) {
    int i;
    printf("{ ");
    for (i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(a[0]);    
    printf("Input 1: { 1, 2, 3, 4, 5 }\nOutput 1: ");
    thaythe(a, n);
    in_mang(a, n);    
    printf("\n");
    int b[] = { 5, 3, 4, 2, 6, 8 };
    int m = sizeof(b) / sizeof(b[0]);   
    printf("Input 2: { 5, 3, 4, 2, 6, 8 }\nOutput 2: ");
    thaythe(b, m);
    in_mang(b, m);
    return 0;
}
