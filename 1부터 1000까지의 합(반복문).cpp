#include <stdio.h>

int main(void){
	int i = 1, sum =0;
	while(i <= 1000){
		sum += i;
		i++;
	}
	printf("1~1000의 합은 %d 입니다.\n",sum);
	return 0;
}
