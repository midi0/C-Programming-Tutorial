#include <stdio.h>
#include <string.h>

int main(void){
	char input[10] = "The Love";
	char result[5] = "Love";
	
	
	//result�� �Ҵ緮���� ū ���ڿ��� �������� input�� ���� result�� ����ȴ� (strcpy�� ������ �Լ��⶧��) 
	strcpy(result, input);
	printf("���ڿ� ���� :%s\n", result); 
	
	return 0;
}
