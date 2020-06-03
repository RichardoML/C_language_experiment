#include<stdio.h>
char * strstr(char *s ,char * t)
{
	char * pc=s;
	char * ps=s, *pt=t;
	while((*pt)!=0)
	{
		if(*ps==*pt)
		{ps++;pt++;
		}
		else{pc++;ps=pc;pt=t;
		}
		if(*pc==0)break;
	}
	if(*pc!=0)
	return pc;
	else
	return NULL;
}
int main()

{
	char s1[100],s2[100];
	scanf("%s",&s1);
	scanf("%s",&s2);
	printf("%p\n",s1);
	printf("%p",strstr(s1,s2));
	return 0; 
 } 
