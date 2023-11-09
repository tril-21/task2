#include <stdio.h>
#define N 5
#define M 5

int main(){
	int array[N][M];
	int trueWhile=1;
	int i, j,countI=N,countJ=M, autoValue=1, temp=0;
	
	while(countI>0&&countJ>0){
		for(i=j=temp; j<countJ; j++){
			array[i][j]=autoValue++;
		}
		j--;
		for(++i; i<countI; i++){
			array[i][j]=autoValue++;
		}
		i--;
		for(--j; j>temp-1; j--){
			array[i][j]=autoValue++;
		}
		j++;
		for(--i; i>temp; i--){
			array[i][j]=autoValue++;
		}
		temp++;
		countI--;
		countJ--;
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
