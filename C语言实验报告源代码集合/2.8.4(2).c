#include<stdio.h>
char* chardeal(char*s)
{
	char* p;
	p=s;
	int i=0;
	while(s[i]!=0)
	{
		while(s[i++]!=' ');
		if(s[i]==' ')
		{	while(s[i]!=0)
			{
				s[i]=s[i+1];
				i++;
			}
			i=0;
			
		}
		else 
		i++;
	}
	
	return p;
}
int main()
{	int n,i;
	scanf("%d",&n);
	getchar(); 
	char* pc[n];
	char c[n][80];
	for(i=0;i<n;i++)
		gets(c[i]);//������ַ��� 
	for(i=0;i<n;i++)
		pc[i]=c+i;//ʹ����ָ����У� 
	for(i=0;i<n;i++)
		{if(*pc[i]!=0)printf("%s\n",chardeal(pc[i]));
		}//��������ĸ��� 
	return 0;

}
