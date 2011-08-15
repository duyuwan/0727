/*
 * 给一个不多于5位的正整数，要求：
 * ①求出它是几位数；
 * ②按逆序打印出各位数字，例如原数是321，应输出123。
*/

#include<stdio.h>
int anaylse(int num)
{
	int count = 0;
	int temp = num;
	
	while(num)
	{


	 count++;
	 printf("%d",num%10);
	 num = num / 10;
	
	}
	printf("\n%dhas %d digits;\n",temp,count);



}



int main()
{

	int num;

	scanf("%d",&num);
	anaylse(num);
	return 0;
}
