#include <stdio.h>

int main()
{
	int time;
	scanf("%d",&time);
//	if (time < 2395 && time > 0)
 // {
		int minute = time%100 + time/100 * 60;
		int minute1 = minute - 480; //ÒÑÖª·ÖÖÓ 
	
		if (minute1 < 2395 && minute1 >= 0)
		{
			int minute2 = minute1/60 * 100 + minute1%60;
			printf("%d",minute2);
		} 
		else
		{
			int minute3 = minute1 + 1440;
			int minute4 = minute3/60 * 100 + minute3%60;
			printf("%d",minute4);
		}
  // }
    /*else
    {
    	printf("please put in another number");
	}*/
	
	return 0;
 } 
