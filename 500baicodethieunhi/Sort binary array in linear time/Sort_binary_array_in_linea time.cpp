#include <stdio.h>
void sapXep(int a[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[k] = 0;
            k++;
        }
    }
    for (int i = k; i < n; i++) {
        a[i] = 1;
    }
}
void in(int a[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}
int main() {
    int a[] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    in(a, n);    
    sapXep(a, n);
    in(a, n);      
    return 0;
}
