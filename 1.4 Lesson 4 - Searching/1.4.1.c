// ____#METHOD - 1____
#include<stdio.h>

int main(){
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&arr[i]);
	}

	int key;
	printf("Enter key element : ");
	scanf("%d",&key);

	// bubble sort
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("After sorting the elements in the array are\n");
	for(int i=0; i<n; i++){
		printf("Value of a[%d] = %d\n",i,arr[i]);
	}

	int low = 0, high = n-1;
	int flag = 0;

	while(low<=high){
		int mid = (low+high)/2;
		if(key==arr[mid]){
			flag = 1;
			printf("The key element %d is found at the position %d\n",key,mid);
			break;
		}
		else if(arr[mid]<key){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	if(flag == 0){
		printf("The Key element %d is not found in the array\n",key);
	}
}




// ____#METHOD - 2____

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}

int main(){
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&arr[i]);
	}

	int key;
	printf("Enter key element : ");
	scanf("%d",&key);

	//qsort fn.
	qsort(arr,n,sizeof(int),compare);

	printf("After sorting the elements in the array are\n");
	for(int i=0; i<n; i++){
		printf("Value of a[%d] = %d\n",i,arr[i]);
	}

	int low = 0, high = n-1;
	int flag = 0;

	while(low<=high){
		int mid = (low+high)/2;
		if(key==arr[mid]){
			flag = 1;
			printf("The key element %d is found at the position %d\n",key,mid);
			break;
		}
		else if(arr[mid]<key){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	if(flag == 0){
		printf("The Key element %d is not found in the array\n",key);
	}
}

