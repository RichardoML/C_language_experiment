#include <stdio.h>
#define change(a,c) (a)=(a)+(c);(c)=(a)-(c);(a)=(a)-(c);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	while(n!=0)
	{
	
	int num[n];
	for(i=0;i<=n-1;i++)
		scanf("%d",&num[i]);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{if(num[j]>num[j+1]){
		
		change(num[j],num[j+1])}
		
		}
	}
	for(i=0;i<=n-2;i++)
	printf("%d ",num[i]); 
	printf("%d\n",num[n-1]);
	scanf("%d",&n);
	}
	return 0;
}

