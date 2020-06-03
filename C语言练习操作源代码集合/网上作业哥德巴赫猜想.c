#include <stdio.h>
#include <math.h>
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
int main(void)
{
	int n;
	int m,k;
	scanf("%d",&m);
	for(k=1;k<=m;k++)
{
	
	int i=2;
	int j;
	scanf("%d",&n);
	j=n-i;
	for(i=2;i<=j;)
	{
		if(sushu(i)&&sushu(j))
		{
		printf("%d=%d+%d\n",n,i,j);
		break;}
		i=i+1;j=n-i; 
		
}}
return 0;	}


