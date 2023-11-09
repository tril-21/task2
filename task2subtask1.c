#include <stdio.h>
#define N 3
#define M 3

int main(){
	int array[N][M];
	int i, j, autoValue=1;
	char userSelect=' ';
	
	printf("Заполнить массив автоматически от 1 до N^2?(y/n)\n");
	scanf("%c",&userSelect);
	
	if(userSelect=='y'){
		for(i=0;i<N;i++){
			for(j=0;j<M;j++){
				array[i][j]=autoValue++;
			}
		}
		printf("Массив сгенерирован!\n");
	} else{
		for(i=0;i<N;i++){
			for(j=0;j<M;j++){
				printf("%d число=",autoValue++);
				scanf("%d",&array[i][j]);
			}
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
