#include <stdio.h>
void timTong(int a[], int n, int target){
	for(int i=0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if((a[i]+ a[j])== target){
				printf("Pair found (%d, %d)\n", a[i], a[j]);
				return;
			}
		}
	}
	printf("Pair not found");
}
int main(){
    int a[]={8,8,-4,2,4,54,2,11};
    int n = sizeof(a)/sizeof(a[0]);
    int target;
    scanf("%d", &target);
    timTong(a, n, target);
    return 0;
}
