#include <stdio.h>


/* print��� �Լ� ������ �Ǵٽ� print��� �Լ��� ����
�̸� ����Լ�(Recursive Function)��� �θ��� 
*/
void print(int count){
	if(count ==0){
		return;
	}else{
		printf("���ڿ��� ����մϴ�. \n");
		print(count -1);
	}
}
int main(void){
	int number;
	printf("���ڿ��� �� �� ����Ͻðڽ��ϱ�? \n");
	scanf("%d", &number);
	print(number);
	return 0;
} 
