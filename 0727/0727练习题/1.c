#include<stdio.h>
 

int main()
{
 	char   a='A';
	int    b=10;
	float  c=22.0;
	double d=3.0;

	printf("%c\n",a);
	printf("%05d\n",b);
        printf("%u\n",b);
	printf("0X%02X\n",b);
	printf("%10.3f\n",c);
	printf("%010.3f\n",(float)d);
	printf("%.1f\n",b);

	return 0;

}
