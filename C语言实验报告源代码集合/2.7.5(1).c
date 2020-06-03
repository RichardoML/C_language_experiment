#include<stdio.h>
void strnins(char s[],char t[],int n)
{

	char c[100];
	int i=n;
	while(s[i]!=0)
	{
		c[i-n]=s[i];
		i=i+1;
	}
	c[i-n]=0;
	int j=0;
	while(t[j]!=0)
	{
		s[j+n]=t[j];
		j=j+1;
	}
	int m=j-1+n;
	while(c[m-j+1-n]!=0)
	{
		s[m+1]=c[m-j+1-n];
		m=m+1;
	}
	s[m+1]=0;
	int p=0;
	while(s[p]!=0)
	{
		printf("%c",s[p]); 
		p=p+1;
	}
}
int main(void)
{ 	char s[100],t[100];
	int n;
	gets(s);
	gets(t);
	scanf("%d",&n);
	strnins(s,t,n);
	return 0; 
}
