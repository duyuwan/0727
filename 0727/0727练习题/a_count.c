#include<stdio.h>
int main()
{
	char str[] = "Hell!I am DUYUWAN,AA,ai AAAAA";
	int count = 0;
	int i;
	for(i = 0; str[i] != '\0'; i++)
	if(str[i] == 'A')
	count++;

	printf("count = %d \n;", count);


	return 0;
}
