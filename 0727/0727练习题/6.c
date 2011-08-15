/*判断奇数偶数*/


#include<stdio.h>



int is_odd(int num)
{
	if(num & 0x01 == 1)
	return 0;
	else 
	return 1;
}


int main()
{
	int a;
	scanf("%d",&a);	

	if(is_odd(a))
	printf("odd\n");
	else
	printf("even\n");

	return 0;
}
