#include <stdio.h>
int main()
{
	int N,i;
	unsigned short a,b;
	scanf("%d",&N);
	for(i=0;i<=N-1;i++)
	{ scanf("%hu",&a);
	b=(a&0x0ff0)|(a<<12)|(a>>12);
		
		printf("%hu\n",b);
	}
	return 0;
}
