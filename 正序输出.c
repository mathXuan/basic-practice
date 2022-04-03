#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	
	int mask = 1;
	int t = x;
	/*
	正确的方法可以分别计算每一位的数字
	x = 13425
	13425 / 1000 ->1
	13425 % 1000 -> 3425
	1000 / 10 -> 1000
	3425 / 1000 -> 3
	3425 % 1000 -> 425
	1000 / 10 -> 100
	do 
	{
	int d = x / mask;
	x %= mask;
	mask /= 10;
	}while( x>0);
	但是如果输入70000，由于
	70000/1000->7
	70000%10000->0 
	因此 while 条件是(mask > 0)
	由于输入的数不同，mask表示数字位数应该是不一样的 
	*/ 
	/*
	do{
	  x/=10;
	  cnt++;计算位数 
	}
	*/ 
	while ( t >9)  //因为循环多了一个 
	{
		t/= 10; 
		mask *= 10;   //计算位数的同时乘了10 
	}  
	/*和上面同样功能：把数字逆过来，先计算每一位的数，然后乘 
	do
	{
	   int d = x%10;
	   t= t * 10 + d;
	   x /= 10;
	} while (x > 0);
	但是这样700会变成7而不是007；这种方法只适用于末尾没有0 
	*/ 
	do
	{
		int d = x/mask;
		printf("%d", d);
		if (mask > 9)
		{
			printf (" ");
		}
		x %= mask;
		mask /=10;
	}while (mask > 0);

	return 0;
}
