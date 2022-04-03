#include <stdio.h>
//注意空格如果有输出的要求，按照输出数字一样对待 

int main()
{
	int n;
	scanf("%d", &n);
	int a=1;
	while (a<=n)
	{
		if (a%2!=0){
			printf("%d",a);
			if (a<n-1)
			{
				printf(" ");
			}
		}
	a++; 
	}
	return 0;
}
