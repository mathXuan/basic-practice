#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(0));
	int a = rand()%100 + 1; //ϵͳ�������
	int b;
	do
	{
		printf("������һ��1~100����");
	    scanf("%d",&b);
	    if (b>a)
	    {
	    	printf("������\n");
		}else if (b<a)
		{
			printf("��С��\n");
		}
	 } while(b!=a);
	 
	printf("��ϲ�㣬�����");
	
	return 0;
 } 
