//METHOD - 1 --> nested loop
#include<stdio.h>
int main(){
	int n,flag = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				flag = 1;
				printf("true\n");
				break;
			}
		}
	}
	if(flag ==0){
		printf("false\n");
	}
	return 0;
}

//METHOD - 2 --> sorting + adj.
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	return (* (int*)a - * (int*)b);
}

int main(){
	int n,flag=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	qsort(arr,n,sizeof(int),compare);

	for(int i=0; i<n-1; i++){
		if(arr[i] == arr[i+1]){
			flag = 1;
			printf("true\n");
		}
	}
	if(flag == 0){
		printf("false\n");
	}
}
