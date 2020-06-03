#include<stdio.h>
int*   sortzheng(int *s,int n)
{	int* p=s;
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(	s[j]>s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	 } 
	 return p;
}
int* sortjian(int* r,int m)
{
	int* q=r;
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j]<s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	return q;
}
int main(int argc,char*argv[])
{
	int n;
	int integer[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&integer[i]);
	for(i=0;i<n;i++)
	printf("%5d",*(
	
	
	
}
