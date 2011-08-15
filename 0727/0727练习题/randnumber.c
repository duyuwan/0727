#include<stdio.h>

#include<stdlib.h>


int main()
{
	int i = 0;
	int j = 0;

	printf("%d\n",RAND_MAX);
	for(i = 0; i < 10; i++)
	{
	j = rand()%10;
	printf("%d  ",j);
	}


	return 0;

}
