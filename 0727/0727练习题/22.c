/*求x^n*/



#include<stdio.h>
#include<math.h>


double p(double x,double n)
{
	double result = 1;
	double i;
	for(i = n; i > 0;i--)
	{

	result = result*x;
	}


	return result;


}




double m(double x, double n)
{
	return pow(x,n);

}

int main()
{
	double  x = 0;
	double  n = 0;

	printf("enter x,n:");

	scanf("%lf  %lf",&x, &n);

	printf("X^n = %f\n",pow(x,n));
	printf("X^n = %f\n",p(x,n));
	printf("X^n = %f\n",m(x,n));
	return 0;

}
