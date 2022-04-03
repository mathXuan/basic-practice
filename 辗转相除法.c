#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	int t; 
	
	/*int t = b;
	do{
		t = a%t;
		if (t == 0)
		{
			printf ("%d", b);
			break;
		}
		a=t;
	}while (t == 0);*/
	//自己写的错误原因是因为不用特地再写一个if直接用循环中的
	//进入条件作为if即可 
		while ( b!=0)   
	{
		t = a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
	
	return 0;
}
