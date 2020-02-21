#include <stdio.h>
//사용자 정의 함수 


//전역 변수 선언
int hour;
int minute;
int minuteAdd;

void counter(){
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}

int main(void){
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf("%d", &minute); 
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	counter();
	printf("더한 시각은 %d 시 %d 분 입니다", hour, minute);
	
	return 0;
}
