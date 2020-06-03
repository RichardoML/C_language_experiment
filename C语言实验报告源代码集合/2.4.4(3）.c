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
	int BEGIN,END,i,j;
	printf("input BEGIN :");
	scanf("%d",&BEGIN);
	printf("input END :");
	scanf("%d",&END);	
	i=2;
	printf("GOLDBACH'S CONJECTURE:\n"); 
	printf("Every even number n>=4 is the sum of two primes.\n");
	if(!(BEGIN%2))
	{
		for(;BEGIN<=END;)
		{
			j=BEGIN-i;
			for(i=2;i<=j;)
			{
				if(sushu(i)&&sushu(j))
				{
					printf("%d=%d+%d\n",BEGIN,i,j);
	    			break;
	    		}
				i=i+1;
				j=BEGIN-i;
			}
			BEGIN=BEGIN+2;
		}	
	}
	if(BEGIN%2)
	{
		BEGIN=BEGIN+1;
		for(;BEGIN<=END;)
		{ 
			j=BEGIN-i;
			for(i=2;i<=j;)
			{
				if(sushu(i)&&sushu(j))
				{
					printf("%d=%d+%d\n",BEGIN,i,j);
	      			 break;
	    		}
				i=i+1;
				j=BEGIN-i;
			}
			BEGIN=BEGIN+2;
		}
	} 

	return 0;
	 
}
