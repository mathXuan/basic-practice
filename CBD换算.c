#include<stdio.h>
int main()
{
	/*BCD���ܣ� ���
	scanf("%d", &number) ;��ʮ���ƶ���
	printf("%x", number);��ʮ�����ƶ��� 
	*/
	int number1;
	scanf("%d", &number1);
	int ten = number1/16;
	int number = number1%16;
	int number2 = ten * 10 + number;
	printf("%d", number2); 
	return 0;
}
