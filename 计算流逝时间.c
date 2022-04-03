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
	//错误原因：忽略了在原有分钟上加上分钟后会进位
	//算法出错，应该先把原有时间换算成分钟，加上流逝的分钟后，再重新转换回原有计数方式 
	printf("%d",time3);
	return 0;
} 
