#include <stdio.h>

int main()
{
	float sum = 0.0;
	int n;
	scanf("%d", &n);
	int sign = 1; 
	
	for (int i = 1; i < n+1; i++)
	{
	//	sum = sum + 1/i ;
	    sum = sum + sign * 1.0/i ;  //�������Լ�����ı��룬һֱû����ȷ����Ϊ��1/i
		                    //�϶�������������ʱ��Ҫ���漰�������ֱ����С�������֣����ܵó���ȷ��� 
	    sign= - sign;  //����ʵ�ּ�һ������һ�� 
	}
	printf("%f", sum); 
	
	return 0;
}
