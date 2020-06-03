#include "stdio.h"
void hailstone(int n)
{   int i=1;
	int a=n;	
	printf("%5d",n);
	while(a!=1)
	{
		if(!(n%2))
		printf("%5d",a=n/2);
		else
		printf("%5d",a=3n+1);
		i=i+1
		if(!(i%6))
		putchar('\n');
	}
 } 
int main()
{
	int n;
	scanf("%d",&n);
	hailstone(n);
	return 0;
}
