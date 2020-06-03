#include <stdio.h>
int main()
{  	char nowchar,prechar,a;
	prechar='\n';
	//int n;
   // scanf("%d",&n);	
    //a=getchar(); 
	//int i=1;

//	for(;i<=n;i++)
//	{ 
   
	nowchar=getchar();
	while(nowchar!='\n') 
	{ 
	if(nowchar==' ')
	{
	if(prechar!=' ')
	printf("%c",nowchar);	  
	}
    else
    printf("%c",nowchar);
    prechar=nowchar;
    nowchar=getchar();
   
	}
	prechar='\n';
	printf("\n");
	
	return 0;}
