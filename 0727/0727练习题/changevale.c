/*change the value of two number*/


#include<stdio.h>
void change(int *p1, int *p2)
{
	int temp;

	temp = *p1;
	*p1 = *p2; 
	*p2 = temp;



}



int main()
{

	int a = 10;
	int b = 20;

	int *p1, *p2;
	p1 = &a;
	p2 = &b;

	printf("a = %d b = %d\n",a, b);
	change(p1, p2);
	printf("a = %d b = %d\n",a, b);
	return 0;
}
