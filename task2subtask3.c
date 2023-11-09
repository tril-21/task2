#include <stdio.h>
#define N 9
#define M 9

int main(){
	int array[N][M];
	int i, j, autoValue=1;

	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			array[i][j]=0;
		}
	}

	for(i=0;i<N;i++){
		for(j=0;j<M-i;j++){
			array[i][j]=1;
		}
	}

	printf("Вывод массива:\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d",array[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
