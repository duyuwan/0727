/*求x^n*/



#include<stdio.h>
#include<math.h>
int main()
{
	int   x = 0;
	int  n = 0;

	printf("enter x,n:");

	scanf("%d  %d",&x, &n);

	printf("X^n = %f\n",pow((double)x,(double)n));

	return 0;

}
