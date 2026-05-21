#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int n;
	scanf("%d",&n);

	if(n<1){
		printf("Invalid number\n");
	}

	else{
		int arr[n];
		for(int i=0; i<n; i++){
			scanf("%d",&arr[i]);
		}

		printf("Original Popularity Scores: ");
		for(int i=0; i<n; i++){
			printf("%d ",arr[i]);
		}
		printf("\n");

		qsort (arr,n,sizeof(int),compare);

		printf("Sorted Popularity Scores: ");
		for(int i=n-1; i>-1; i--){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}
