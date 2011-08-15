/*编写函数 func
 * 实现从字符串中删除指定的字符。同一字母的大、小写按不同字符处理。
 * 例如原字符串为“turbo c and borland c++”
 * ,从键盘上输入字符“n”
 * ,则输出后变为“turbo c ad
 * borlad c++”
 * 。如果输入的字符在字符串中不存在, 则字符串照原样输出
 * */
#include<stdio.h>

int func(char *str,char c)
{
	char *p = str;
	for(; *p; p++)
	  if(*p != c)
	  *(str++) = *p;
	*str = '\0';
	return 0;
}


int main()
{
	
	char c;
	char str[] = "nihao,woshiduyuwan";
	printf("enter char to delete:");
	c = getchar();
 
	func(str, c);
	puts(str);
	return 0;
}
