#include <stdio.h>
#define NUMBER 5

// 배열 학습 
int main(void){
	int i, oddMax, evenMax;
	int array[NUMBER];
	oddMax = 0;
	evenMax = 0;

	for(i=0; i <NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0){
			if(evenMax < array[i]){
				evenMax = array[i];
			}
		}else{
			if(oddMax < array[i]){
				oddMax = array[i];
			}
		}
	}
	printf("짝수 최대값 %d , 홀수 최대값 %d . \n", evenMax, oddMax);
	return 0;
}
