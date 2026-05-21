void bubbleSortWithSmallest(int arr[], int n) {
	for(int i=0; i<n; i++){
		int swapped = 0;
		for(int j=i+1; j<n; j++){
			swapped = 1;
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		if(swapped == 0){
			break;
		}
	}
}
