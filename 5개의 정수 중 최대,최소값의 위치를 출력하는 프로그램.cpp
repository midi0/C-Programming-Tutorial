#include <stdio.h>
#include <limits.h>
#define NUMBER 5

// 배열 학습 
int main(void){
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	for(i=0; i <NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i]){
			max = array[i];
			index = i;
		}
	}
	printf("최대 값은 %d이고 %d 번째에 있습니다. \n", max, index+1);
	
	min = INT_MAX; 
	for(i=0; i <NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
	}
	printf("최소 값은 %d이고 %d 번째에 있습니다. \n", min, index+1);
	return 0;
}
