#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
}; 

int main(void){
	struct student S;
	
	printf("�й� �Է� : ");
	scanf("%d", &S.number);
	
	printf("�̸� �Է� : ");
	scanf("%s", S.name);
	
	printf("���� �Է� : ");
	scanf("%lf", &S.grade);
	
	printf("���� : %d\n", S.number);
	printf("�̸� : %s\n", S.name);
	printf("���� : %.1f", S.grade);
	return 0;
}
