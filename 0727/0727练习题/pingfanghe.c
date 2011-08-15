/*输入2个单精度的浮点数，两个输入用逗号隔开，输出这两个数的平方和，要求输出结构保留2位有效数字。*/

#include<stdio.h>

int main()
{
	float a = 10;
	float b = 20;

 	scanf("%f,%f",&a, &b);

	printf("%.1e",(a*a + b*b));

	return 0;
}
