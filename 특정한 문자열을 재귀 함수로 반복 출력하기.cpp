#include <stdio.h>


/* print라는 함수 내에서 또다시 print라는 함수를 쓴다
이를 재귀함수(Recursive Function)라고 부른다 
*/
void print(int count){
	if(count ==0){
		return;
	}else{
		printf("문자열을 출력합니다. \n");
		print(count -1);
	}
}
int main(void){
	int number;
	printf("문자열을 몇 개 출력하시겠습니까? \n");
	scanf("%d", &number);
	print(number);
	return 0;
} 
