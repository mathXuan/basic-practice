#include <stdio.h>


int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	
	int sum = 0;

	int judge = 0;
	int count = 0;
	int j = 2;
	int i ;//作为循环变量 
	//两重循环，一个是不断输入数；一个是判断每一个数是否是素数的时候循环计算 
	//这个算法计算了n~m之间的素数和 
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
		
		//计算第n个到第m个素数的和 
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
 
