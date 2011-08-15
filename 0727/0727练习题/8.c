/*加减乘除的实现*/
#include<stdio.h>

int calc(int a,int b,char c)
{ 

	int result;
	switch(c)
	{
	  case '+':result = a + b;break;
	  case '-':result = a - b;break;
	  case '*':result = a * b;break;
	  case '/':result = a / b;break;
	  case '%':result = a % b;break;
	  default :break;

	}

	return result;
}




int main()
{
	int a, b;
	char c;
	printf("enter a?b:");
	scanf("%d %c %d", &a, &c, &b);
	
	printf("result = %d\n",calc(a,b,c));



	return 0;
}
