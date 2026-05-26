#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	float an = *(const float*)a;
	float bn = *(const float*)b;
	if(an<bn){return -1;}
	if(an>bn){return 1;}
	return 0;
}

int main(){
	int n;
	printf("Number of books: ");
	scanf("%d",&n);

	if(n<=0){printf("Invalid number of books\n");}

	else{
		float arr[n];
		for(int i=0; i<n; i++){
			printf("Book %d price: ",i+1);
			scanf("%f",&arr[i]);
		}
		qsort(arr,n,sizeof(float),compare);
		printf("Sorted list of book prices:\n");
		for(int i=0; i<n; i++){
			printf("%.2f\n",arr[i]);
		}
	}
	return 0;
}
