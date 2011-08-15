/*输出三个数中的最大者*/

#include<stdio.h>



int biggest(int a, int b, int c)
{	

	int max = a;
	if(b > a)
	max = b;
	if(c > b)
	max = c;

	return max;

}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("enter three number:");
	scanf("%d %d %d", &a, &b, &c);

	printf("the biggest one is:%d\n",biggest(a,b,c));

	return 0;

}
