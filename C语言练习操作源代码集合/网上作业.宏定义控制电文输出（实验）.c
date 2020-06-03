#include<stdio.h>
#define CHANGE 	((c)%2)
int main(void)
{	char c,d;
	int i,n;
	scanf("%d",&n);
	d=getchar();
	for(i=1;i<=n;i++)
	{
		scanf("%c",&c);
		if (CHANGE==1)
		{
			while(c!='\n')
			{
				if(c>=65&&c<=90)
					c=c+32;
				else if(c>=97&&c<=122)
					c=c-32;
				printf("%c",c);
				scanf("%c",&c);
			}
			printf("\n");

		}
		else {
				while(c!='\n')
				{	
					printf("%c",c);
					scanf("%c",&c);
				}
				printf("\n");
			}
			
	}
	return 0;
}
