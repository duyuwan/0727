#include<stdio.h>

#define printfL printf
int main()
{
	int a_double = sizeof(double);
        int a_int = sizeof(int);
	int a_short = sizeof(short);
	int a_char = sizeof(char);
 	int a_long = sizeof(a_double);	
	char c='A';


	printfL("a_double=%d\n",a_double);
	printfL("a_int=%d\n",a_int);
	printfL("a_short=%d\n",a_short);
	printfL("a_char=%d\n",a_char);
	printf("a_long = %d\n",a_long);
	printf("%d\n",c);



	return 0;

	
}
