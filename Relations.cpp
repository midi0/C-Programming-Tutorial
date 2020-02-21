#include <stdio.h>
//관계 연산자 

int main(void){
	int x =50, y = 30;
	/*x가 y와 같은 값을 가지고 있는가? 
	*/
	printf("x가 y와 같은가 ? %d\n", x==y);
	printf("x가 y와 다른가 ? %d\n", x !=y);
	printf("x가 y보다 큰가? %d\n", x>y);
	printf("x가 y보다 작은가? %d\n", x<y);
	printf("x에 y값을 넣으면? %d\n", x=y);
	//false 값일 경우 0 출력, true 일 경우 1 출력; 
	if(x==y){
		//조건이 참이면 실행되는 부문 
	}else{
		//조건이 거짓일 경우 실행되는 부분 
	}
	return 0;
}
