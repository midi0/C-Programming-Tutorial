#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // 100���� ���ڿ��� ���� ���� �Ҵ�
	if(pc == NULL){
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	} 
	/*pc�� ����Ű�� �����͸� 1�� ������Ű��
	���ĺ� �ҹ��ڸ� �����Ѵ�.*/
	for(i=0; i<26; i++){
		*(pc+i) = 'a' + i;// �ƽ�Ű �ڵ尡 ���� �����Ѵ� 
	}
	
	/* �ƽ�Ű �ڵ� 0 ���� NULL�� �ǹ��ϰ�
	�ΰ��� �������� PC�� ���ڿ��� ������ �ν��Ѵ� */
	*(pc+i) = 0;
	
	printf("%s\n", pc);
	free(pc);
	
	return 0;
}
