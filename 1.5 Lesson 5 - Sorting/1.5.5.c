#include<stdio.h>
int main() {
	int a[20], i, n, j, large, index;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for ( i=0; i<n; i++) {
		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("Before sorting the elements in the array are\n");
	for ( i=0; i<n; i++) {
		printf("Value of a[%d] = %d\n", i, a[i]);
	}

	//selection sort using largest element method
	for ( i=0; i<n-1; i++) {
		large = a[n-i-1];  // assigned last element as largest
		index = n-i-1;
		for ( j=0; j<n-i; j++) {
			if ( a[j]>large ) {
				large = a[j];
				index = j;
			}
		}
		a[index] = a[n-i-1];  // after finding largest element swapped its position with last element (so finding largest from unsorted and putting it out in sorted array)
		a[n-i-1] = large;
	}
	printf("After sorting the elements in the array are\n");
	for (i=0; i<n; i++) { // Complete the code in for
		printf("Value of a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
