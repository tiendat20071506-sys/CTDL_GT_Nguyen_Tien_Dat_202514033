#include <stdio.h>
void tim_mang_tong_bang0(int arr[], int n) {
    int found = 0; 
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                found = 1;
                printf("{ ");
                for (int k = i; k <= j; k++) {
                    printf("%d", arr[k]);
                    if (k < j) printf(", ");
                }
                printf(" }\n");
            }
        }
    }    
    if (!found) {
        printf("Khong tim thay mang con nao co tong bang 0.\n");
    }
}
int main() {
    int a[100];
	int n;
	printf("Ban muon nhap bao nhieu phan tu? (Toi da 100):\n ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }     
    tim_mang_tong_bang0(a, n);    
    return 0;
}
