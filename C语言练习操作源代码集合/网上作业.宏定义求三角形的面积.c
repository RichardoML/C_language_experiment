#include<stdio.h>
#include <math.h>
#define s(a,b,c) (((a)+(b)+(c))/2)
#define area(a,b,c) sqrt( (s(a,b,c)) *((s(a,b,c))-(a))*((s(a,b,c))-(b))*((s(a,b,c))-(c))  )
int main()
{
int a,b,c;
while (scanf("%d%d%d",&a,&b,&c)!=-1)
	{
	printf("%d %lf\n",s(a,b,c),area(a,b,c));	
	}
	return 0;	
}
