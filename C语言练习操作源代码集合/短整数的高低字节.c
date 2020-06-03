#include <stdio.h>
int main()
{
	int N,i;
	short a;
	int b,c;
	short mask=0xff;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%hu",&a);
		b=a&mask;
		c=a>>8;
		printf("%c,%c\n",c,b);
		
	}
return 0;
 } 
