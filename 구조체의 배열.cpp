#include <stdio.h>
#define SIZE 5 //학생의 수 

struct student{
	int number;
	char name[20];
	double grade; // 학점 
};

int main(void){
	
	struct student list[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++){
		printf("학번 입력 : ");
		scanf("%d", &list[i].number);
		printf("이름 입력 : ");
		scanf("%s", &list[i].name);
		printf("학점 입력 : ");
		scanf("%lf", &list[i].grade);
	}
	
	for(i=0; i<SIZE; i++){
		printf("학번 : %d , 이름 %s , 학점 %.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;
}
