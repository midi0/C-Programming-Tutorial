#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // 100개의 문자열을 넣을 공간 할당
	if(pc == NULL){
		printf("동적 메모리 할당 실패\n");
		exit(1);
	} 
	/*pc가 가르키는 포인터를 1씩 증가시키며
	알파벳 소문자를 삽입한다.*/
	for(i=0; i<26; i++){
		*(pc+i) = 'a' + i;// 아스키 코드가 점점 증가한다 
	}
	
	/* 아스키 코드 0 값은 NULL을 의미하고
	널값을 넣음으로 PC가 문자열이 끝남을 인식한다 */
	*(pc+i) = 0;
	
	printf("%s\n", pc);
	free(pc);
	
	return 0;
}
