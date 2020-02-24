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
	
	printf("학번 입력 : ");
	scanf("%d", &S.number);
	
	printf("이름 입력 : ");
	scanf("%s", S.name);
	
	printf("학점 입력 : ");
	scanf("%lf", &S.grade);
	
	printf("학점 : %d\n", S.number);
	printf("이름 : %s\n", S.name);
	printf("학점 : %.1f", S.grade);
	return 0;
}
