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
		scanf("%d",&number); //��Ȼ�ڲ����������֣�������Ϊ֮ǰ�����ֲ���Ҫ�ˣ���˲���Ҫ���飬ֱ�Ӵ���ԭ�������ּ��� 
		/*�ⲿ���Ƕ�ͬ���Ĵ�����еļ򻯣���Ϊ�������ж��Ƿ�Ϊ-1��
		ͬʱ��Ϊ�˱�֤�ܹ��������򻯵Ĵ���󲻶�ѭ������ 
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
	
	printf("%f\n", 1.0*sum/count);  //1.0��ˣ���֤�Ǹ����� 
	return 0;
}
