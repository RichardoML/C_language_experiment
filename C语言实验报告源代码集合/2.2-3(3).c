#include "stdio.h"
#include <stdlib.h>
#define A 0xff000000
#define B 0x00ff0000
#define C 0x0000ff00
#define D 0x000000ff
int main()
{
	unsigned long int x;
	int a, b, c,d;
	printf("input x");
	scanf("%lu",&x);
	d=(x&D);
	c=(x&C)>>8;
	b=(x&B)>>16;
	a=(x&A)>>24;
	printf("%d.%d.%d.%d",d,c,b,a);
	return 0; 
}
