#include <stdio.h>
int main(void){
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y); // .2는 소숫점 2번째 자리까지 출력한다는 뜻
	printf("z = %.2f\n", z); 
	return 0;
}
