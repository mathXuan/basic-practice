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
		judge1 = count * 10;    ����һ����λ���� ����֮��Ҫ�Ӹ�λת���ɶ����ƣ������������ǰ��λ�� 
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
		result *= 10;                  д��ת���ɶ����Ƶ��� 
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
	 } while(result > 0);                    ��������ת��Ϊʮ���� 
	
	printf("%d", last_result);  */
	

    int num;
    int count=0;
    int a=0;
    int dig=0;
    scanf("%d",&num);   //num������������ 
    do{
        count ++;    //����λ�� 
        a=num%10;    //���ÿһλ�� 
        if((a+count)%2==0){
            dig=dig+pow(2,count-1);    //ֱ�Ӽ����ʮλ��������������Ƶ����֣� ÿһλ��2�ļ��η� 
                                      //û�г�������Ϊֻ����1��ǰ���²��ܽ������ѭ�� 
        }
        num /=10;
    }while(num>0);
    printf("%d",dig);
	
	return 0;
 } 
