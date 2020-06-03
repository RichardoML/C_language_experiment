#include <stdio.h>
void printis(int n,float a)
{
	if (n==0)
		printf("After if-else processing,the result is : %.2f\n",a);
	if (n==1)
		printf("After switch processing,the result is : %.2f\n",a);
	if (n==2)
		{
		printf("After if-else processing,the result is : %.2f\n",a);
		printf("After switch processing,the result is : %.2f\n",a);
		}
}

int main()
{
	int n;
	float a,b,f;
	char c,d;
	//d=getchar();
	//scanf("%c",&c);
	while (scanf("%d%f%f%*c%c",&n,&a,&b,&c)!=-1)
	{
	

	if(c=='+')
	{
	f=a+b;
	printis(n,f);
	}
	if(c=='-')
	{
		f=a-b;
		printis(n,f);
	}
	if(c=='*')
	{
		f=a*b;
		printis(n,f);
		
	}
	if(c=='/')
	{
		f=a/b;
		printis(n,f);
	
	}
	//d=getchar();
	//scanf("%c",&c);
	}
	printf("\n"); 
return 0;
	
}
