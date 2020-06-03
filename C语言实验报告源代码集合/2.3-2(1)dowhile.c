#include <stdio.h>
int main()
{
	int i,n,s=1;
	printf("Please enter n:");
	scanf("%d",&n);
	i=1;
	do
	{
		s=s*i;
		i=i+1;
	}
	while(i<=n);
	printf("%d!=%d",n,s);
	
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
