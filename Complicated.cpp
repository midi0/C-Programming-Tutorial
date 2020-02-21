#include <stdio.h>
int main(void){
	//증감 연산자, 복합 대입 연산자 실습 
	int x = 100;
	printf("현재 x 값은 %d 입니다.\n", x);
	x += 50; // x = x+50;
	printf("현재 x 값은 %d 입니다.\n", x);
	x -= 50; // x = x-50;
	printf("현재 x 값은 %d 입니다.\n", x);
	x *= 50; // x = x*50;
	printf("현재 x 값은 %d 입니다.\n", x);
	x /= 50; // x = x/50;
	printf("현재 x 값은 %d 입니다.\n", x);
	x %= 3; // x = x%3;
	printf("현재 x 값은 %d 입니다.\n", x);
	return 0;
} 
