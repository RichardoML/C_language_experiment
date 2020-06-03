#include "stdio.h"
int main()
{
	char x,
	scanf("%c",&x);
	if(0x30<=x<=0x39||65<=x<=70)
	{if(0x30<=x<=0x39)
	printf("%d",x);
	else printf("%d",x-55);		
	}
	else
	printf("%d",x);
	return 0;
 } 
