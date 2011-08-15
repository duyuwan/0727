#include<stdio.h>
#include<math.h>


float get_length(float a, float b)
{
	return sqrt(a*a + b*b);
	
}



int main()
{
	float a, b;

	scanf("%f %f",&a, &b);
	printf("the three length is:%f\n",get_length(a, b));



	return 0;
}
