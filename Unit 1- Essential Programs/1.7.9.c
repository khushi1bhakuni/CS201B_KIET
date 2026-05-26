#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	int an = *(const int*)a;
	int bn = *(const int *)b;
	if(an>bn){return 1;}
	if(bn>an){return -1;}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid number\n");
		return 0;
	}
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Original Quantities: ");
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}printf("\n");
	qsort(arr,n,sizeof(int),compare);
	printf("Sorted Quantities: ");
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}printf("\n");
	return 0;
}
