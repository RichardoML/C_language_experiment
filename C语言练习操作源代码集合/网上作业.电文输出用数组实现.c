#include<stdio.h>
#define change ((c[i])%2)
int main()
{
	char c[200],d;

	int n,k;
	scanf("%d",&n);
	d=getchar();
	for(k=1;k<=n;k++)
	{	int i=0;
		c[i]=getchar();
		while(c[i]!='\n')
		{
			i=i+1;
			c[i]=getchar();
		}
		i=0;
		if(change)
		{
			while(c[i]!='\n')
			{
				if(c[i]>=65&&c[i]<=90)
					c[i]=c[i]+32;
				else if(c[i]>=97&&c[i]<=122)
					c[i]=c[i]-32;
				printf("%c",c[i]);
				i+=1;
		}	
		if(k!=n)
			printf("\n");
		}
		else
		{
			while (c[i]!='\n')
			{
				printf("%c",c[i]);
				i+=1;
			}
			if(k!=n)
			printf("\n"); 
		}
	}
	return 0;
}
