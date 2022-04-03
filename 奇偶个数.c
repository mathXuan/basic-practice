#include<stdio.h>

int main ()
{ 
	int i;
	//错误原因：虽然输入一组数字，但是并不用数组来存储
	// 在循环的最后又一次的有输入值 
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
		scanf("%d",&i); //不用设置成数组的关键 
	}
	printf("%d %d", qi, ou);
	
	
	return 0;
}
