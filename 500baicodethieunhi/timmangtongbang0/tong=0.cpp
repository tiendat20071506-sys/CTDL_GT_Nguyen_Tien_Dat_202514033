#include <stdio.h>
void timmangtongbang0(int a[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                if (found == 0) {
                    printf("The subarrays with a sum of 0 are:\n");
                    found = 1; 
                }
                printf("{ ");
                for (int k = i; k <= j; k++) {
                    printf("%d", arr[k]);
                    if (k < j) printf(", ");
                }
                printf(" }\n");
            }
        }
    }
    if (found == 0) {
        printf("Subarray with zero-sum does not exist\n");
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
    timmangtongbang0(a, n);    
    return 0;
}
