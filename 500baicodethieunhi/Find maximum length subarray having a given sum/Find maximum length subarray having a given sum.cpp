#include <stdio.h>
void findMaxLenSubarray(int a[], int n, int S)
{
    int len = 0;
    int ending_index = -1;
    for (int i = 0; i < n; i++)
    {
        int target = 0;
        for (int j = i; j < n; j++)
        {
            target += a[j];
            if (target == S)
            {
                if (len < j - i + 1)
                {
                    len = j - i + 1;
                    ending_index = j;
                }
            }
        }
    }
    printf("[%d, %d]", ending_index - len + 1, ending_index);
}
int main(void){
    int a[100];
	int n;
	printf("Ban muon nhap bao nhieu phan tu? (Toi da 100):\n ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	int S;
	printf("Nhap S:");
	scanf("%d", &S);     
    findMaxLenSubarray(a, n, S);
    return 0;
}
