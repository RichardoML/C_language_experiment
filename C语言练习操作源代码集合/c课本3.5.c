#include "stdio.h"
int main()
{   short n,i;
     i=0;
	scanf("%h",&n);
	char x[n];
	for(i=0;i<=n-1;i++)
	
{
		scanf("%c",&x[i]);}
		for(i=0;i<=n-1;i++){
		
	if((48<=x[i]&&x[i]<=57)||(65<=x[i]&&x[i]<=70)||(97<=x[i]&&x[i]<=102))
	{if(48<=x[i]&&x[i]<=57)
	printf("%d",x[i]-48);
	if(65<=x[i]&&x[i]<=70)
	printf("%d",x[i]-55);
	if(97<=x[i]&&x[i]<=102)
	printf("%d",x[i]-87);	
	}
		
	
	
	else
	printf("%d",x[i]);}
	getchar();
	getchar();getchar();
	return 0;
 } 
