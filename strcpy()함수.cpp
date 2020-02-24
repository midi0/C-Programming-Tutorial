#include <stdio.h>
#include <string.h>

int main(void){
	char input[10] = "The Love";
	char result[5] = "Love";
	
	
	//result의 할당량보다 큰 문자열이 들어갔음에도 input의 값이 result로 복사된다 (strcpy가 포인터 함수기때문) 
	strcpy(result, input);
	printf("문자열 복사 :%s\n", result); 
	
	return 0;
}
