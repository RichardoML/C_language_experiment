#include <stdio.h>
int main()
{  	char nowchar,prechar;
	prechar='\n';
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
	printf("\n");
	return 0;
} 
