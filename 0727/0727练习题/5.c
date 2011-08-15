/*求1+2+3+ ...... +99的和*/

#include<stdio.h>
  
int main()
{
	int i,result = 0;
	
	for(i = 0; i < 100; i++)
	{
	    result = result + i;
	}

	printf("result = %d\n",result);

	return 0;

}
