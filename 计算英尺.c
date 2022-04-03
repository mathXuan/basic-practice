# include<stdio.h>

int main()
{
	int cm;
	scanf("%d",&cm);
	
    int foot = cm / 30.48; //原本错误：int foot=cm/0.3048;  （因为算法错误） 
	int inch = ((cm / 30.48) - foot)*12; //原本错误：int inch=(cm/0.3048-foot)*12;
	printf("%d %d",foot,inch);
	
	return 0;
 } 
