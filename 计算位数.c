# include<stdio.h>

int main()
{
	int x;
	int n=0; 
	scanf("%d", &x);
	n++;
	x/=10;
	while (x>0)  /*������>=0�����Ҫ���
	��λ��������ŵ�ѭ�����棩
	��Ϊ���κ���/10���� 0 ��һֱѭ����ȥ */ 
	{
		n++;
		x/=10;
	}
	printf("%d",n);
	return 0;
 } 
