#include <stdio.h>
//输出100以内的素数 
int main(void){
    int x ;	
	for(x=2;x<100;x++) //从2 开始，一个一个判断 
	{
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){   //用"需要判断的数"除以每一个因数（从2开始） 
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
