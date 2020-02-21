#include <stdio.h>

int getDays(int month, int day){
	int i, sum = 0;
	for(i = 1; i<month; i++){
		
		if(i == 2){
			sum+= 28;
		}
		else if(i%2 ==0){
			sum += 30;
		}
		else{
			sum += 31;
		}
	}
	return sum + day; 
}

int main(void){
	int month, day;
	printf("오늘의 날짜를 입력하세요\n" );
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 오늘까지의 날짜 수는 %d일 입니다 \n", getDays(month,day));
	
	return 0;
}
