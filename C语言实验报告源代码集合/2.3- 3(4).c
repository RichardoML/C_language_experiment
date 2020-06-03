#include <stdio.h>
int main(void)
{
	int x,i;
	printf("input x");
	scanf("%d",&x);
	while(x!=0)
	{
		printf("%d",x%10);
		x/=10;
	}
	return 0; 
}
