#include "stdio.h"
void hailstone(int n)
{   int i=1;
	int a=n;	
	printf("%5d",n);
	while(a!=1)
	{
		if(!(a%2))
		{
		printf("%5d",a/2);
		a=a/2;
		}
		else
		{
		printf("%5d",3*a+1);
		a=3*a+1;
		}
		i=i+1; 
		if(!(i%6))
		putchar('\n');
	}if(i%6)
	printf("\n");
 } 
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
	hailstone(n);
	printf("\n");
	scanf("%d",&n);
	}
	return 0;
}
