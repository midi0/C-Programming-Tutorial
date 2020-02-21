#include <stdio.h>
//조건 연산자 

int main(void){
	int x = -50, y = 30;
	int absoluteX = (x>0) ? x: -x;
	/*x의 절댓값 반환 
	x>0 이 참일 경우 x 를 출력하고
	x>0 이 거짓일 경우 -x 를 반환한다*/
	int max = (x>y)? x:y;
	int min = (x<y)? x:y;
	
	printf("x의 절대값 %d\n", absoluteX);
	printf("x와 y의 최대값 %d\n", max);
	printf("x와 y의 최소값  %d\n", min);
	return 0;
}
