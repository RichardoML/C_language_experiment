#include "stdio.h"
int combine(int i,int j)
{
	int r;
	if(j==0)
		r=1;
	else
		r=combine(i,j-1)*(i-j+1)/j;
	return r;
}
void kongge(int n,int i)
{	int a ;
	for(a=1;a<=2*n-2*i-5;a++)
		printf(" ");
}
int main()
{ 	int n,i,j;
	n=10; 
	for(i=0;i<=n-3;i++)
	{
		kongge(n,i);
		for(j=0;j<=i;j++)
		{
			printf("%4d",combine(i,j));
		}
		printf("\n");

	}
	if(n>1)
	{

		printf("  1");for(j=1;j<=n-2;j++)
		printf("%4d",combine(n-2,j));
		printf("\n");
	}
	printf("1");for(j=1;j<=n-1;j++)
	printf("%4d",combine(n-1,j));
	printf("\n\n");
	scanf("%d",&n);
	return 0;

 } 
