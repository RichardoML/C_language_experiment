#include"stdio.h"
#include"math.h"
int sushu(int x)
{
	int i=2;
	int b,r;
	r=1;
	b=sqrt(x);
	for(i=2;i<=b;i++)
	{
		if(!(x%i))
		{
			r=0;
			break;
		}
		else
			r=1;
	}
	return r;
}
int main()

{
	int n,i,j;

	scanf("%d",&n);	
	i=2;
	j=n-i;
	if(!(n%2))
	{
		for(i=2;i<=j;)
		{
			if(sushu(i)&&sushu(j))
			{
				printf("%d=%d+%d",n,i,j);
	       		break;
	    	}
			i=i+1;
			j=n-i;
		}
	}
	else
		printf("error");
	return 0;
	 
}
