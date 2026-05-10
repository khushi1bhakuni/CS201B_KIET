#include<stdio.h>
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int arr[N][M];
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int x1,x2,y1,y2;
	int sum=0;

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	for(int i=x1-1; i<=x2-1; i++){  //indexing starting from 1 therefore -1 is done on coordinates
		for(int j=y1-1; j<=y2-1; j++){
			sum += arr[i][j];
		}
	}

	printf("%d\n",sum);
}
