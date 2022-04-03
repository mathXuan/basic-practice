#include <stdio.h>
#include <math.h>

int main()
{
	/*
	int n;
	scanf("%d", &n);
	int count = n;
	int t = 0;
	int position = 1;
	int result = 1;
	int judge1;
	while (count >0)
	{
		count = count%10;
		t++;
		judge1 = count * 10;    计算一共几位数； 由于之后要从个位转化成二进制，会逆序；因此提前换位置 
	}
	
	printf("%d", count);
	
	for (int i = 1; i< t;i++)
	{
		int judge;
		judge = judge1 %10;
		if ( (judge + position) % 2 == 0)
		{
			result = result + 1;
		}else
		{
			result = result + 0;            
		}
		result *= 10;                  写出转换成二进制的数 
	}
	
	printf("%d", result);
	
	int last_result = 0;
	do
	{
		int i = 0;
		i++;
		int single; 
		single = result % 2;
		last_result = last_result * (single * pow(2, i)) ;
	 } while(result > 0);                    将二进制转换为十进制 
	
	printf("%d", last_result);  */
	

    int num;
    int count=0;
    int a=0;
    int dig=0;
    scanf("%d",&num);   //num用来输入数据 
    do{
        count ++;    //计算位数 
        a=num%10;    //获得每一位数 
        if((a+count)%2==0){
            dig=dig+pow(2,count-1);    //直接计算成十位数（不输出二进制的数字） 每一位乘2的几次方 
                                      //没有乘数是因为只有有1的前提下才能进入这个循环 
        }
        num /=10;
    }while(num>0);
    printf("%d",dig);
	
	return 0;
 } 
