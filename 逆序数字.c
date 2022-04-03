#include <stdio.h>
//逆序输出 

int main()
{
	int number;
	scanf("%d", &number);
	
	int digit;//表示每一位
	int ret = 0; //最开始的结果 
	while (number > 0)
	{
		digit = number%10;
		printf("%d", digit);
		ret = ret*10 + digit;  //ret保证都能一位一位加上去 
	    number /= 10;
	}
	 
	
	while (number)
	{
	}
	
	
	
	return 0;
}
