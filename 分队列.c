#include <stdio.h>
//ע��ո�����������Ҫ�󣬰����������һ���Դ� 

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
