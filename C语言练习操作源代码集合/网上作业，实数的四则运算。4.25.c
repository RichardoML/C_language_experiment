#include <stdio.h>
void szysif(double a,double b,char c)//用if实现四则运算 
{	float d;
	if(c=='+')
		d=a+b;
	if(c=='-')
		d=a-b;
	if(c=='*')
		d=a*b;
	if(c=='/')
		d=a/b;
	printf("After if-else processing,the result is : %.2lf\n",d);
	
 }
 void szysswitch(double a,double b,char c)//用switch实现四则运算 
 {	double d;
 	switch(c) 
	{
 		case 43:d=a+b;break;
		case 45:d=a-b;break;
		case 42:d=a*b;break;
		case 47:d=a/b;break;	
	}
	printf("After switch processing,the result is : %.2lf\n",d);
} 
int main()
{
	int t;
	double a,b;
	char c,d;
	while((num=scanf("%d%lf%lf",&t,&a,&b))==3)
	{	
		d=getchar();
		c=getchar();
		switch(t)
		{
			case 0: szysif(a,b,c);break;
			case 1: szysswitch(a,b,c);break;
			case 2: szysif(a,b,c);szysswitch(a,b,c);break;
		}printf("\n");
	}
	return 0;
 } 
