/*从键盘中输入三个数，输出其中最大的数字*/
#include<stdio.h>

int max(int a, int b, int c)
{
 	int max = a;
	if(b > a && b > c)
	max = b;
	if(c > b && c > a)
	max = c;
	
	return max;


}




int main()
{

	int a=10;
	int b=20;
	int c=88;

	printf("max = %d\n",max(a,b,c));

	return 0;

}
