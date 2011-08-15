#include<stdio.h>
#include<math.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float e = 0;

	printf("enter a,b,c:");
	scanf("%f %f %f",&a, &b, &c);
	e = b*b - 4*a*c;
	if(e < 0)
	printf("there is no result.\n");
	else if(e == 0)
	printf("x1 = x2 = %f\n",(-b)/2);
	else
	{
	printf("x1 = %f\n",((-b)+sqrt(e))/2);
	printf("x2 = %f\n",((-b)-sqrt(e))/2);
	}


	
	return 0;
}
