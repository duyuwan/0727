/*给出一百分制成绩，要求输出成绩等级’A’,’B’,’C’,’D’,’E’。
 * 90分以上为’A’，80－89分为’B’，70－79分为’C’，60－69分为’D’，
 * 60分以下为’E’
*/




#include<stdio.h>


char get_grade(int mark)
{
	switch(mark/10)
	{
	  case 10: 
	  case  9: return 'A';
	  case  8: return 'B';
	  case  7: return 'C';
	  case  6: return 'D';
	  default: return 'E';

	}




}

int main()
{
	int mark;
	char grade;
	printf("enter your mark:");
	
	scanf("%d",&mark);
	grade = get_grade(mark);

	printf("%c\n",grade);

	return 0;

}
