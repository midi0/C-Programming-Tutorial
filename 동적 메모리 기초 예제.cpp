#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi; // Point Integer
	pi = (int *)malloc(sizeof(int));
	
	if(pi == NULL) 
	{
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	
	/*���� �޸� ��� �� ������ �ش� �޸𸮸� ��ȯ�ؾ���*/ 
	free(pi);//�Ҵ� ���� 
	
	return 0;
}
