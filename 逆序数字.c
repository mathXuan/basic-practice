#include <stdio.h>
//������� 

int main()
{
	int number;
	scanf("%d", &number);
	
	int digit;//��ʾÿһλ
	int ret = 0; //�ʼ�Ľ�� 
	while (number > 0)
	{
		digit = number%10;
		printf("%d", digit);
		ret = ret*10 + digit;  //ret��֤����һλһλ����ȥ 
	    number /= 10;
	}
	 
	
	while (number)
	{
	}
	
	
	
	return 0;
}
