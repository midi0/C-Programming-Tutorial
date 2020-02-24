#include <stdio.h>
#include <string.h>

int main(void){
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d \n", strcmp(inputOne, inputTwo));
	// 동일 = 0 , 왼쪽 값이 앞에 있으면 -1, 오른쪽 값이 앞에 있으면 1 출력 
	
	return 0;
} 
