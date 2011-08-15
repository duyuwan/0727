/*输入一个整数1<=a<=12表示月份，判断是哪个月，并输出。要求用switch语句。*/



#include<stdio.h>

int main()
{
	int month;

	scanf("%d",&month);
	switch(month)
	{
	case 1:printf("January");break;
	case 2:printf("February");break;
	case 3:printf("Marth");break;
	case 4:printf("April");break;
	case 5:printf("May");break;
	case 6:printf("June");break;


	default:printf("error!");
	}



	return 0;
}
