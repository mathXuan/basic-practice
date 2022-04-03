#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(0));
	int a = rand()%100 + 1; //系统的随机数
	int b;
	do
	{
		printf("请输入一个1~100的数");
	    scanf("%d",&b);
	    if (b>a)
	    {
	    	printf("数大了\n");
		}else if (b<a)
		{
			printf("数小了\n");
		}
	 } while(b!=a);
	 
	printf("恭喜你，答对了");
	
	return 0;
 } 
