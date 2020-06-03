#include <stdio.h>
int main()
{
	char c[34];
	fgets(c,34,stdin);
	fputs(c,stdout);
	printf("%s",c);
	return 0;
	
}
