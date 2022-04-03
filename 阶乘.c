#include <stdio.h>

int main()
{
	int result = 1;
	int n;
	scanf("%d", &n);
	
	while(n >= 1)
	{
		result = n * result;
		n--;
	}
	
	printf("%d", result);
	return 0;
}
