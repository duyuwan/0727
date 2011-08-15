#include<stdio.h>

int main()
{	int a = 0;

	int count = 0;
	printf("enter a:");
	scanf("%d",&a);


	while(a != 0)
	{
	printf("%d",a%10);
	a = a/10;
	count++;
	}


	printf("\n count = %d\n",count);


	return 0;
}
