#include<stdio.h>
int main()
{
	int time1,fly_time;
	scanf("%d %d",&time1,&fly_time);
	
	int hour1 = time1/100;
	int minute1 = time1%100;
	int first_minute = hour1*60 + minute1;
	int time2 = first_minute + fly_time;
	int time3 = time2/60 * 100 + time2%60;
	

	//int time2 = time1 + 100*(fly_time/60) + fly_time%60;
	//����ԭ�򣺺�������ԭ�з����ϼ��Ϸ��Ӻ���λ
	//�㷨����Ӧ���Ȱ�ԭ��ʱ�任��ɷ��ӣ��������ŵķ��Ӻ�������ת����ԭ�м�����ʽ 
	printf("%d",time3);
	return 0;
} 
