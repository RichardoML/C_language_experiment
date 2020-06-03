#include<stdio.h>
#define CHANGE 1 	
int main(void)
{	char c;
	scanf("%c",&c);
	while(c!='\n')
	{
		#if CHANGE==1
		{	
			if(c>=65&&c<=90)
			c=c+32;
			else if(c>=97&&c<=122)
			c=c-32;
			printf("%c",c);
		}
		#else
			printf("%c",c);
		#endif
		scanf("%c",&c);
	}
	return 0;
}
