#include <stdio.h>
#define N 5

int main(){
	int array[N];
	int i, j, autoValue=1;
	char userSelect=' ';
	
	int tempArrayElement=0;
	
	printf("Заполнить массив автоматически от 1 до N^2?(y/n)\n");
	scanf("%c",&userSelect);
	
	if(userSelect=='y'){
		for(i=0;i<N;i++){
			array[i]=autoValue++;
		}
		printf("Массив сгенерирован!\n");
	} else{
		for(i=0;i<N;i++){
			printf("%d число=",autoValue++);
			scanf("%d",&array[i]);
		}
	}
	int chet=0;
	if(N%2==0)
		chet=N/2;
	else
		chet=N/2+1;
	for(i=0; i<chet;i++){
		j=N-(i+1);
		if(i!=j){
			tempArrayElement=array[i];
			array[i]=array[j];
			array[j]=tempArrayElement;
		}
	}
	
	printf("Вывод массива:\n");
	for(i=0;i<N;i++){
		printf("%d",array[i]);
		printf(" ");
	}
	printf("\n");
	return 0;
}
