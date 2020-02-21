#include <stdio.h>

int main(void){
	//char x = 'A';
	int x = 65;
	// 'A' 의 아스키 코드 값이 65라서 출력결과는 동일,
	// int로 해도 출력이 %c라서 자동 형변환 
	char y = 65;
	char z = 'B';
	
	printf("%c\n", x);
	printf("%c\n", y);
	printf("%d\n", z);
	return 0;
} 
