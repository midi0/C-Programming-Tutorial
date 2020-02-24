#include <stdio.h>

int main(void){
	
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL){
		printf("파일 열기에 실패\n");
	}else{
		printf("파일 열기에 성공\n");
	}
	
	while((c = fgetc(fp)) != EOF)// End of File 즉 , 파일의 끝이 아닐 경우 
	{
		putchar(c);
	}
	fclose(fp);
	return 0;
} 
