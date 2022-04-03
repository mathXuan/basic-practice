#include <stdio.h>
int main()
{
	int number;
	int sum = 0;
	int count = 0;
	
	scanf("%d",&number);
	
	while( number != -1)
	{
		sum += number;
		count ++;
		scanf("%d",&number); //虽然在不断输入数字，但是因为之前的数字不需要了，因此不需要数组，直接代替原来的数字即可 
		/*这部分是对同样的代码进行的简化：因为有两个判断是否为-1；
		同时，为了保证能够继续，简化的代码后不断循环输入 
		do{
		scanf ("%d", &number);
		if ( number != -1)
		{
		   sum += number;
		   count ++;
		}
		} while(number != -1);	
		*/ 
	}
	
	printf("%f\n", 1.0*sum/count);  //1.0相乘，保证是浮点数 
	return 0;
}
