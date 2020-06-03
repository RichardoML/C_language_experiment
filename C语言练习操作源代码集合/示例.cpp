#include "stdio.h"
int main(void)
{
	unsigned int x , mask;
	mask=255;
	scanf("%u",&x);
	int i;
	for(i=0;i<=3;i++)
	{
		printf("%u",(((mask<<i*8)&x)>>i*8));
		if (i!=3)
		putchar(' ');
	}
	return 0;
}
 

