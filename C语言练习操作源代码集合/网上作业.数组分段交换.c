#include<stdio.h>
int main()
{ 
	int n,k;
while(scanf("%d%d",&n,&k)!=-1)
{

	int u[60];
	int i;
	for(i=0;i<=n-1;i++)
	scanf("%d",&u[i]);
	for(i=k;i<=n-1;i++)
	printf("%d ",u[i]);
	for(i=0;i<=k-2;i++)
	printf("%d ",u[i]);
	printf("%d",u[k-1]);
	printf("\n");
}
	
	return 0;
	
}
