#include <stdio.h>
//�������� 
int main(void){
	int x = 50, y =30;
	printf("x�� y���� ũ�� y�� 40�̸��ΰ�? %d\n",(x>y)&&(y<40));
	//&& �� and�� �ǹ̷� ����Ѵ� 
	printf("x�� y���� �۰ų�, y�� 30 �ΰ�? %d\n",(x<y)||(y==30));
	//||�� or�� �ǹ̷� ����Ѵ� �� ������ �ϳ��� �����ص� true ��ȯ 
	printf("x�� ���� 50 �ƴմϱ�? %d\n", x !=50 );
	return 0;
}
