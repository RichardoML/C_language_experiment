#include<stdio.h>
int strlength(char a[])
{
	int i=0;
	while (a[i]!='\n')
		i+=1;
	return i;
}
int main()
{	int m;
	int x;
	scanf("%d",&m);
	char d;
	d=getchar();
	for(x=1;x<=m;x++)
	{
	
	char a[20];
	int i=0;
	scanf("%c",&a[i]);
	while(a[i]!='\n')
	{
		i+=1;
		scanf("%c",&a[i]);
	}
    int n=strlength(a);
    int sum,k,j,num;
    num=1;
    sum=0;
    for(k=2;k<=n-1;k++)
    {	if(a[k]>=48&&a[k]<=57)
    		num=(a[k]-48);
   		 if(a[k]>=65&&a[k]<=70)
			num=(a[k]-55);
		if(a[k]>=97&&a[k]<=102)
			num=(a[k]-87);
    	for(j=1;j<=n-k-1;j++)
    	{
    		num*=16;
		}
		sum=sum+num;
	}
	printf("%d\n",sum);
	}
    return 0;
} 
