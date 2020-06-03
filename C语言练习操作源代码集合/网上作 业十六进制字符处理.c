#include "stdio.h"
int main()
	
{   short n,i;
    char a;
     i=0;
	 scanf("%hd",&n);
	 
	a=getchar();
	char x[n];
	for(i=0;i<=n-1;i++)
	
	{
		scanf("%c",&x[i]);
	  a=getchar();
		

		
	if((48<=x[i]&&x[i]<=57)||(65<=x[i]&&x[i]<=70)||(97<=x[i]&&x[i]<=102))
	{if(48<=x[i]&&x[i]<=57)
	printf("%d\n",x[i]-48);
	if(65<=x[i]&&x[i]<=70)
	printf("%d\n",x[i]-55);
	if(97<=x[i]&&x[i]<=102)
	printf("%d\n",x[i]-87);	
	}
		
	
	
	else
	printf("%d\n",x[i]);}
	return 0;	
 } 
