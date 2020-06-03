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
		gets(c[i]);//输入各字符串 
	for(i=0;i<n;i++)
		pc[i]=c+i;//使数组指向各行； 
	for(i=0;i<n;i++)
		{if(*pc[i]!=0)printf("%s\n",chardeal(pc[i]));
		}//输出处理后的各行 
	return 0;

}
