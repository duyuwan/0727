/*输入三个整数x,y,z，请把这三个数由小到大输出。*/


#include<stdio.h>


void sort(int *p1,int *p2, int *p3)
{

	int p;
	if(*p1 > *p2)
	{
	p = *p1;
	*p1 = *p2;
	*p2 = p;
	}
	if(*p2 > *p3)
	{
	p = *p2;
	*p2 = *p3;
	*p3 = p;
	}

	if(*p1 > *p2)
	{
	p = *p1;
	*p1 = *p2;
	*p2 = p;
	}

}



int main()
{
	int a, b, c;
	
	scanf("%d %d %d",&a, &b,&c);

	printf("%d,%d,%d\n",a, b, c);
	
	sort(&a, &b, &c);

	printf("%d,%d,%d\n",a, b, c);

	return 0;
}
