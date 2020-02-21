#include <stdio.h>
#define N 20

//이중 FOR문  
int main(void){
	int i, j;
	for(int i =0; i < N; i++){
		// 공백 출력  
		for(j = N-i-1 ; j>0; j--){
			printf("  ");
		} 
		// 사각형 출력 
		for(j = 0; j<i; j++){
			printf("■");
		}
		// 사각형  출력
		for(j = 0; j<i-1; j++){
			printf("■");
		} 
		printf("\n");
	}
	return 0;
}
