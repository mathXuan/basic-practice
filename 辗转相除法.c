#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	int t; 
	
	/*int t = b;
	do{
		t = a%t;
		if (t == 0)
		{
			printf ("%d", b);
			break;
		}
		a=t;
	}while (t == 0);*/
	//�Լ�д�Ĵ���ԭ������Ϊ�����ص���дһ��ifֱ����ѭ���е�
	//����������Ϊif���� 
		while ( b!=0)   
	{
		t = a%b;
		a=b;
		b=t;
	}
	printf("%d",a);
	
	return 0;
}
