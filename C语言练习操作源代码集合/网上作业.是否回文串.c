#include<stdio.h>
int strlength( char c[])
{
	int j=0;
	while(c[j]!='\n')
		j=j+1;
	return j;
}
int main()
{	int m,t;
	char cha;
    scanf("%d",&m); 
    cha=getchar();
    for(t=1;t<=m;t++)
	{
	 
	char c[200];
	int i=0;
	scanf("%c",&c[0]);
	while(c[i]!='\n')
	{
		i+=1;
		scanf("%c",&c[i]);
	}
    int n=strlength(c);
    int k=0,j=n-1-k;
    while(k<=j)
    {
    	if (c[k]==c[j])
		{
			k+=1;
			j=n-1-k; 
		}
		else break;
	}
	if(k>j)
		printf("Yes!\n");
	else
		printf("No!\n");
	}
	return 0;
	
}
