#include <stdio.h>
int findDuplicate(int arr[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        k ^= arr[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        k ^= i;
    }    
    return k;
}
int main() {
    int a[100];
	int n;
	printf("Ban muon nhap bao nhieu phan tu? (Toi da 100):\n ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("The duplicate element is %d\n", findDuplicate(a, n));
	return 0;     
}
