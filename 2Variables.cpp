#include <stdio.h>

int main(void){
	int x = 10;
	int y = 20;
	printf("x = %d 입니다\n", x);
	printf("y = %d 입니다\n", y);
	printf("x + y = %d 입니다\n", x+y);
	printf("x - y = %d 입니다\n", x-y);
	printf("x * y = %d 입니다\n", x*y);
	printf("x / y = %d 입니다\n", x/y); // 몫만 출력되기때문에 0으로 나온다. 
	return 0;
}
