# include<stdio.h>

int main()
{
	int cm;
	scanf("%d",&cm);
	
    int foot = cm / 30.48; //ԭ������int foot=cm/0.3048;  ����Ϊ�㷨���� 
	int inch = ((cm / 30.48) - foot)*12; //ԭ������int inch=(cm/0.3048-foot)*12;
	printf("%d %d",foot,inch);
	
	return 0;
 } 
