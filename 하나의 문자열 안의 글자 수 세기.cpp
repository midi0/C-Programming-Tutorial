#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input);
	int count = 0;
	
	// �ΰ��� ���������� �ݺ� 
	while(input[count] != '\0'){
		count++;
	}
	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�\n", count);
	printf("�Է��� ���ڿ��� : %s �Դϴ�", input);
	return 0;
}
