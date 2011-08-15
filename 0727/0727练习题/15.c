/*输入3个整数a、b、c，编程交换它们的值，即把a中的值给b，把b中的值给c，把c中的值给a。*/

#include<stdio.h>
void sort(int *p1, int *p2,int *p3)
{
	int p;
       	  p = *p3;
	*p3 = *p2;
	*p2 = *p1;
        *p1 = p;

}


int main()
{
	

	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	printf("a = %d b = %d c = %d \n",a, b, c);
	sort(&a, &b, &c);
	printf("a = %d b = %d c = %d \n",a, b, c);



	return 0;
}
