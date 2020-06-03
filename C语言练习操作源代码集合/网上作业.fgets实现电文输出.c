#include<stdio.h>
#define change ((c[0])%2)
int strlength(char a[])
{
	int i=0;
	while (a[i]!='\n')
		i+=1;
	return i;
}
int main()
{	int m,p;
    char o;
	scanf("%d",&m);
	scanf("%c",&o);
	for(p=1;p<=m;p++)
	{
	
	char c[200];
	fgets(c,200,stdin);
	int n=strlength(c);
	int i=0;
	if(change)
	{
			while(c[i]!='\n')
			{
				if(c[i]>=65&&c[i]<=90)
					c[i]=c[i]+32;
				else if(c[i]>=97&&c[i]<=122)
					c[i]=c[i]-32;
				i+=1;
			}fputs(c,stdout);	
			
	} 
	else
	fputs(c,stdout);
	}
	return 0;
	
	
}
