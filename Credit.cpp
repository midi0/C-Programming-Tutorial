#include <stdio.h>

int main(void){
	int score = 85; // 학생의 점수 
	
	if(score >=90){
		printf("A 학점입니다.\n");
	}else if(score >= 80){
		printf("B 학점입니다.\n");
	}else if(score >= 70){
		printf("C 학점입니다.\n");
	}else{
		printf("F 학점입니다 .\n");
	}
	return 0;
}
