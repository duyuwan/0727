/*putout the bigger one of two  number*/
#include<stdio.h>
int bigger(int a, int b)
{
	if(a > b)
	return a;
	else 
	return b;


}



int main()
{
	int a = 0;
	int b = 0;


	printf("enter a,b:");
	scanf("%d  %d", &a, &b);

	printf("the bigger one is %d \n", bigger(a,b));

	return 0;
}
