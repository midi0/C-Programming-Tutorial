#include <stdio.h>

int main(void){
	
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL){
		printf("���� ���⿡ ����\n");
	}else{
		printf("���� ���⿡ ����\n");
	}
	
	while((c = fgetc(fp)) != EOF)// End of File �� , ������ ���� �ƴ� ��� 
	{
		putchar(c);
	}
	fclose(fp);
	return 0;
} 
