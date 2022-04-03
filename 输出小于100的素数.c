#include <stdio.h>

int main()
{
	int j =100; 
	int cnt = 0; 
	
	for( j ; j > 0; j--)
	{
		int i;
		int pre_number = 1;
		for(i = 2; i < j; i++)
		{
			if(j % i == 0 )
			{
				pre_number = 0;
				break;
			}
		}
			if (pre_number == 1)
		{
			cnt++;
			printf("%d\t", j); //\t可以让数字对齐
			if ( cnt %5 ==0)
			{
				printf("\n ");//每5个换行 
			 }
		}	
	}
	return 0;
}
