#include <stdio.h>
//���100���ڵ����� 
int main(void){
    int x ;	
	for(x=2;x<100;x++) //��2 ��ʼ��һ��һ���ж� 
	{
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){   //��"��Ҫ�жϵ���"����ÿһ����������2��ʼ�� 
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d ",x);		
		}
	}
	printf("\n");
	return 0;
}
