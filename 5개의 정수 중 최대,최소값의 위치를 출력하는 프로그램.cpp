#include <stdio.h>
#include <limits.h>
#define NUMBER 5

// �迭 �н� 
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
	printf("�ִ� ���� %d�̰� %d ��°�� �ֽ��ϴ�. \n", max, index+1);
	
	min = INT_MAX; 
	for(i=0; i <NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
	}
	printf("�ּ� ���� %d�̰� %d ��°�� �ֽ��ϴ�. \n", min, index+1);
	return 0;
}
