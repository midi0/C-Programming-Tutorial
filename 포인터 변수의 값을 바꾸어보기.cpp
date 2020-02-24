#include <stdio.h>

int main(void){
	int i = 10;
	int *p;
	
	p = &i; 
	printf("i = %d\n", i);
	*p = 20; // 포인터 p 가 가르키는 주소가 i값이기 때문에 i의 값이 변경된다. 
	pruntf("i = %d\n", i);
	
	return 0;
}
