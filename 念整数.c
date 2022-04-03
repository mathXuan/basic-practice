	/* 这部分是正确的 
	int n;
	scanf("%d", &n);
	//先把这个数倒过来
	
	int j = n;
	int new_n;
	int cnt = 0;
	int mask = 1;
	while(j > 0)
	{
		j = j%10;
	    cnt ++;
	    mask *=10;  //用整除的方式获得每一位，应该不断乘10 
	 } 
	 printf("%d",cnt);
	 
	 if(n<0)
	 {
	 	n = -n; 
	 	printf("fu ");
	 } */
	 
	 /*
	 int i = 1;
	 int single;
	 for( i; i < cnt+1; i++)
	 { 
	 	single = n/mask;
	 	switch(single)
	 	{
	 		case 0:
	 			printf("ling");break;
	 		case 1:
	 			printf("yi");break;
	 		case 2:
	 			printf("er");break;
	 		case 3:
	 			printf("san");break;
	 		case 4:
	 			printf("si");break;
	 		case 5:
	 			printf("wu");break;
	 		case 6:
	 			printf("liu");break;
	 		case 7:
	 			printf("qi");break;
	 		case 8:
	 			printf("ba");break;
	 		case 9:
	 			printf("jiu");break;				 			 
		 }
		 
		 if(i < cnt)
		 {
		 	printf(" ");
		 }
	 } */
	 
#include<stdio.h>
int main()
{
   int x = 0;
   int t = 0;//t用来暂存x的数值，因为如果用x参与运算，出了while循环会变为0，对后续读取每一位数字有影响
   int mask = 1;//mask用于每次模除的被除数，最后所得的值即为从高位到低依次取出的数字
   scanf("%d", &x);
   t = x;
   if (x<0)
   {
	  t = -x;
	  printf("fu ");
	  x = -x;
   }
   while (t > 9)
   {
	  t /= 10;
	  mask *= 10;
   }
   //printf("mask=%d,x=%d\n", mask,x);
   do
   {
	  int d = x / mask;//d表示每次取出的数字
	  switch(d)
	  {
		  case 0:printf("ling"); break;
		  case 1:printf("yi"); break;
		  case 2:printf("er"); break;
		  case 3:printf("san"); break;
		  case 4:printf("si"); break;
		  case 5:printf("wu"); break;
		  case 6:printf("liu"); break;
		  case 7:printf("qi"); break;
		  case 8:printf("ba"); break;
		  case 9:printf("jiu"); break;
	   }
	   if (mask > 9)
	   {
		  printf(" ");
	   }
	   x %= mask;
	   mask /= 10;
   } while (mask > 0);
   return 0;
}
