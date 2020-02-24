#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi; // Point Integer
	pi = (int *)malloc(sizeof(int));
	
	if(pi == NULL) 
	{
		printf("동적 메모리 할당 실패");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	
	/*동적 메모리 사용 후 무조건 해당 메모리를 반환해야함*/ 
	free(pi);//할당 해제 
	
	return 0;
}
