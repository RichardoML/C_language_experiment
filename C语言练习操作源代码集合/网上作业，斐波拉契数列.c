#include <stdio.h>
int F(int n)
{
	int r;
	if(n==1||n==2)
		r=1;
	else
		r=F(n-1)+F(n-2);
	return r;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>=3)
		{
			for(i=1;i<=n;i++)
			{
				printf("%10d",F(i));
				if(!(i%8))
				printf("\n");
	 		}
			
			printf("\n");
			if(n%8)
			printf("\n");
			
		}
		else 
	 		printf("Error!\n\n");
	 	scanf("%d",&n);
	}
	 
	return 0;
}
