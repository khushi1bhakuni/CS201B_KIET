#include <stdio.h>

void merge(float arr[], int l, int mid, int r){
	int i=l,j=mid+1,k=0;
	float temp[50];
	while(i<=mid && j<=r){
		if(arr[i]<=arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
		}
	}
	if(i>mid){
		for(int f=j ; f<=r ; f++){
			temp[k++] = arr[f];
		}
	}else{
		for(int f=i ; f<=mid ; f++){
			temp[k++] = arr[f];
		}
	}

	for (int z=0; z<k; z++){
		arr[l+z] = temp[z];
	}
}

// Recursive Merge Sort
void mergeSort(float arr[], int left, int right) {
	if(left < right){
		int mid = left+(right-left)/2;
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}

int main() {
    int n;

    printf("Number of books: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of books\n");
        return 0;
    }

    float prices[n];

    for (int i = 0; i < n; i++) {
        printf("Book %d price: ", i + 1);
        scanf("%f", &prices[i]);
    }

    mergeSort(prices, 0, n - 1);

    printf("Sorted list of book prices:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", prices[i]);
    }

    return 0;
}
