#include <stdio.h>
#include <limits.h>

int main(void){
	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d입니다.\n", x);
	printf("x+1은 %d입니다.\n", x+1); // 오버플로우가 발생한다. 
	return 0;
}
