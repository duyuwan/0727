/*不使用第三变量，改变两个数的值*/
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n",a,b);


 	a = a + b;
	b = a - b;
	a = a - b;

	printf("a=%d,b=%d\n",a,b);


	return 0;
}
