#include <stdio.h>
#define N 20

//���� FOR��  
int main(void){
	int i, j;
	for(int i =0; i < N; i++){
		// ���� ���  
		for(j = N-i-1 ; j>0; j--){
			printf("  ");
		} 
		// �簢�� ��� 
		for(j = 0; j<i; j++){
			printf("��");
		}
		// �簢��  ���
		for(j = 0; j<i-1; j++){
			printf("��");
		} 
		printf("\n");
	}
	return 0;
}
