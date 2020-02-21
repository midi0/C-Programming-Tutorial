#include <stdio.h>
// 반복 함수를 이용한 숫자 피라미드 출력 
// 반복함수는 오직 for 문과 while 문으로 구성

int print(int a){
	int i, j;
	for(i = 0; i < a; i++){
		for(j = 0; j <= i ; j++){
			printf("%d", j+1);
		}
		printf("\n");
	}
} 
int main(void){
	int a;
	scanf("%d", &a);
	print(a);
	
}
