#include<stdio.h>
#include<string.h> 
int main()
{
	char*(*p[2])(const char *,const char *);
	char a[50],b[50];
	printf("input two strings:\na:");
	gets(a);
	printf("\nb:");
	gets(b);
	printf("����һ��1����2������������ַ����Ĵ���ʽ \n") ;
	p[1]=strcmp;
	p[2]=strstr;
	int i;
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("strcmp:%d",p[1](a,b));break;
		case 2:printf("strstr:%s",p[2](a,b));break;
	}
	return 0;
}
