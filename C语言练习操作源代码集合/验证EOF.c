#include <stdio.h>
int main()
{
	char c;
	c=' ';
	c=getchar();
	printf("%c",c);
	while (scanf("%c",&c)!=-1)
	{
	printf("%c",c);
	}
return 0;

