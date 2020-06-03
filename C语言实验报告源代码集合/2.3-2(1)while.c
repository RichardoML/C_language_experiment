#include <stdio.h>
int main()
{
	int i,n,s=1;
	printf("Please enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s*i;
		i=i+1;
	}
	printf("%d!=%d",n,s);
	
	return 0;
}
