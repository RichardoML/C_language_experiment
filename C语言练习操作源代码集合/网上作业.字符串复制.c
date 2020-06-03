#include<stdio.h>
void mycpy(char s[],char t[],int n)
{
int i;
for(i=0;i<=n-1;i++)
s[i]=t[i];
s[n]='\0';	
}
int main()
{int m;
scanf("%d",&m);
char d;
d=getchar();
int k;
for(k=1;k<=m;k++)
{

	char t[1000];
	int n;
	fgets(t,1000,stdin); 
	scanf("%d",&n);
	int p;
	p=getchar();

	char s[n+1];
	mycpy(s,t,n);
	int i;
	for(i=0;i<=n-1;i++)
	printf("%c",s[i]);
	printf("\n");
}return 0;
	
	
}
