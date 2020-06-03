#include <stdio.h>
int main()
{	char c1,c2,c3,c;
	int a1,a2,a3;
	
	
	while(scanf ("%d%d%d",&a1,&a2,&a3)!=-1)
	{
	
	
	if(a1>a2)
	{
		if(a3>a1)
			printf("A:%d\n",a1);
		else
		{
			if(a3>a2)
			{
				if(a1==a3)
					printf("A:%d\n",a1);
				else
					printf("C:%d\n",a3);
			}
			else
				printf("B:%d\n",a2);
		}
	}
	else
	{
		if(a3>a2)
		{
			if(a1==a2)
				printf("A:%d\n",a1);
			else
				printf("B:%d\n",a2); 
		} 
		else
		{
			if(a3==a1)
				printf("A:%d\n",a1);
			else
				{
				if(a1>a3)
					printf("A:%d\n",a1);
				else
					{
					if(a3==a2)
						printf("B:%d\n",a2);
					else
						printf("C:%d\n",a3);
					}
				}
		}
	}
	}                                                                  
return 0;
}

