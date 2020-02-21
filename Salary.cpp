#include <stdio.h>
#define MONTHS 12 // 상수의 값 정의 

int main(void)
{
	double monthSalary = 1000.5;
	printf("연봉은 $ %.2f", monthSalary * MONTHS);
	return 0;
}
