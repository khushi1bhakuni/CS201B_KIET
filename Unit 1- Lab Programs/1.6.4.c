#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int fear[n];
	for(int i=0; i<n; i++){
		int flag = 0;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				flag = 1;
				fear[i] = j+1-i;
				break;
			}
		}
		if(flag==0){
			fear[i] = 1;
		}
	}
	int prod = 1;
	for(int i=0; i<n; i++){
		prod *= fear[i];
	}
	printf("%d\n", prod);
	return 0;
}
