#include<stdio.h>

int main ()
{ 
	int i;
	//����ԭ����Ȼ����һ�����֣����ǲ������������洢
	// ��ѭ���������һ�ε�������ֵ 
	/*
	int a[i]
	for (;i++)
	{
		scanf("%d", &a[i]);
	}*/
	
	int qi=0; 
	int ou=0;
	scanf("%d", &i);
	while ( i != -1)
	{
		if (i %2 ==0)
		{
			ou++;
		}else
		{
			qi++;
		}
		scanf("%d",&i); //�������ó�����Ĺؼ� 
	}
	printf("%d %d", qi, ou);
	
	
	return 0;
}
