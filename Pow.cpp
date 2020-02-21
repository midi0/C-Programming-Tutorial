#include <stdio.h>
#include <math.h> // pow(), abs() 등의 함수가 들어있는 라이브러리 

//거듭제곱 연산 프로그램 작성 

int main(void){
	double x = pow(2.0, 10.0); //좌항의 숫자가 우항의 숫자만큼 거듭제곱 된다 즉 2의 0승
	printf("2의 10 제곱은 %.0f 입니다 \n", x);
	return 0;
}
