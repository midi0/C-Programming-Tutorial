#include <stdio.h>
int main(void){
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y); // .2�� �Ҽ��� 2��° �ڸ����� ����Ѵٴ� ��
	printf("z = %.2f\n", z); 
	return 0;
}
