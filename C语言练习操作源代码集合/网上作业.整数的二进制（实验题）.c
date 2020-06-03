#include<stdio.h>
int main()
{	int m;
	scanf("%d",&m);
	int j;
	for(j=0;j<m;j++)
	{
	
	
	
	char c[sizeof(int)*8];
	int a,i;
	int integer;
	scanf("%d",&integer);
	int mask=0x1;
	for(i=0;i<(sizeof(int)*8);i++)
	{
		if(a=mask&(integer>>i))
		c[i]='1';
		else
		c[i]='0';
	}
	for(i=(sizeof(int)*8-1);i>=0;i--)
	printf("%c",c[i]);
	printf("\n");
}
	return 0;
}
