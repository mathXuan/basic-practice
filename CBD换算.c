#include<stdio.h>
int main()
{
	/*BCD解密： 最简单
	scanf("%d", &number) ;以十进制读入
	printf("%x", number);以十六进制读出 
	*/
	int number1;
	scanf("%d", &number1);
	int ten = number1/16;
	int number = number1%16;
	int number2 = ten * 10 + number;
	printf("%d", number2); 
	return 0;
}
