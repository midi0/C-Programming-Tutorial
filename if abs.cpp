#include <stdio.h>
//if 문을 이용한 절댓값 출력

int main(void){
	int x = -150;
	
	if(x<0){
		x = -x;
	}
	printf("x의 절대값은 %d 입니다\n", x);
	return 0;
} 

