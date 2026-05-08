#include<stdio.h>
int main() {
	int a[20], i, n, j, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i=0; i<n ; i++){
		printf("Enter element for a[%d] : ", i);
		scanf("%d",&a[i]); 
	}

	printf("Before sorting the elements in the array are\n");
	for(i=0;i<n;i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}

	for(i=0; i<n; i++){
		int swapped = 0;
		for(j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				swapped = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(swapped == 0){
			break;
		}
	}

	printf("After sorting the elements in the array are\n");
	for(i=0; i<n; i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}
}
