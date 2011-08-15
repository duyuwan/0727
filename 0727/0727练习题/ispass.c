/*the score of the student is pass or not*/

#include<stdio.h>
char* ispass(float score)
{
	if(score >= 60)
	return "pass";
	else 
	return "not pass";

}


int main()
{
	int score = 0;
	printf("enter a score :");
	scanf("%d",&score);


	printf("%s\n",ispass(score));



	return 0;




}
