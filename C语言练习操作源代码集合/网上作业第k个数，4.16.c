#include "stdio.h"
int dikgeshu(unsigned int n,int k)
{   int i=1;
	for(;i<=k-1;i++)
		n/=10;
	if(n!=0)
		return n%10;
	else
		return -1;
	
}
int main()
{
	unsigned int n;
	int	k;
	while(scanf("%u%d",&n,&k)!=-1)
	{
		printf("%d\n",dikgeshu(n,k)); 
	}
	return 0;
} 
