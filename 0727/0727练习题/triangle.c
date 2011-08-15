#include<stdio.h>

#include<math.h>
float  sort(float a, float b)

{
	if(a > b)
	return a;
	else 
	return b;

}

int main()
{	float s, area, p;
	float m = 0;


	float a = 0;
 	float b = 0;
	float c = 0;
	printf("enter three length:");

	scanf("%f %f %f",&a, &b, &c );
        


	m = sort(c, sort(a, b));
	


	
	if(m <a + b + c - m)
	printf("can\n");
	else 
	printf("can not\n");

	s = (a + b + c)/2;

	area = sqrt(s*(s - a)*(s - b)*(s - c));
	p = a + b + c;
	printf("area = %f \np = %f\n",area, p);

	return 0;

}




