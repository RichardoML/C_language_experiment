#include "stdio.h"
int main()
{
	unsigned short k,b;
	scanf("%hu",&k);
	b=((k<<12)|(k>>12))|(((k>>4)<<8)>>4);
	printf("%hu",b);
	return 0;
}
