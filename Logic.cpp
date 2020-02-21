#include <stdio.h>
//논리연산자 
int main(void){
	int x = 50, y =30;
	printf("x가 y보다 크고 y는 40미만인가? %d\n",(x>y)&&(y<40));
	//&& 는 and의 의미로 사용한다 
	printf("x가 y보다 작거나, y는 30 인가? %d\n",(x<y)||(y==30));
	//||는 or의 의미로 사용한다 두 조건중 하나만 성립해도 true 반환 
	printf("x의 값이 50 아닙니까? %d\n", x !=50 );
	return 0;
}
