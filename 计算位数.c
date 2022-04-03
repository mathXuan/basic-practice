# include<stdio.h>

int main()
{
	int x;
	int n=0; 
	scanf("%d", &x);
	n++;
	x/=10;
	while (x>0)  /*不能是>=0（这就要求把
	个位数的情况放到循环外面）
	因为：任何数/10都是 0 会一直循环下去 */ 
	{
		n++;
		x/=10;
	}
	printf("%d",n);
	return 0;
 } 
