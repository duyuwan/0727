/*从键盘输入一个正整数作为年份，编程判断该年是不是闰年。*/


#include<stdio.h>

int main()
{

	int year = 0;
	scanf("%d",&year);

	if(((year % 4 == 0) && (year % 100 == 0)) || (year % 400))
	printf("is");
	else
	printf("not");


	return 0;
}
