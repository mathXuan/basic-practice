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
	    sum = sum + sign * 1.0/i ;  //上面是自己错误的编码，一直没有正确是因为，1/i
		                    //肯定不是整数，这时候要把涉及到的数字变成有小数的数字，才能得出正确结果 
	    sign= - sign;  //可以实现加一个，减一个 
	}
	printf("%f", sum); 
	
	return 0;
}
