#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct student{
	int number;
	char name[10];
	double grade;
};

int main(void){
	struct student s;
	s.number = 20200224;
	strcpy(s.name, "������");
	s.grade = 4.5;
	printf("�й� : %d \n", s.number);
	printf("�̸� : %s \n", s.name);
	printf("���� : %.1f \n", s.grade);
	
	return 0;
}
