#include <stdio.h>


int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	
	int sum = 0;

	int judge = 0;
	int count = 0;
	int j = 2;
	int i ;//��Ϊѭ������ 
	//����ѭ����һ���ǲ�����������һ�����ж�ÿһ�����Ƿ���������ʱ��ѭ������ 
	//����㷨������n~m֮��������� 
  	for( n ; n < m+1 ; n++)
	{	
		for( i = 2 ; i < n; i++)
		{
			if(n%i == 0)
			{
			judge = 1;
			break;
			}
		}
		
		//�����n������m�������ĺ� 
		/*	do{
			if(n%i == 0)
			{
			judge = 1;
			break;
			}
			i ++;
		} while( i < n ); */
		
		
		if (judge == 0)
		{
			printf("%d\n", n);
			sum += n;
		}  
    }
		/*
		for( j ; j < m+1 ; j++)
	{
		do{
			if(j%i == 0)
			{
			judge = 1;
			count ++;
			break;
			}
			i ++;
		} while( i < j );
		
		if (judge == 1 && j>=n && j<=m)
		{
			sum += j;
		} 
	} */ 
	
	
	printf("%d", sum);
	return 0;
 } 
 
