#include "stdio.h"
int main()
{
	   unsigned short x,m,n,y;
	   printf("Input three integer x,m,n (0<=m<=15,1<=n<=16-m)");
	   scanf("%hu%hu%hu",&x,&m,&n);
	   if((0<=m&&m<=15)&&(1<=n&&n<=16-m))
	   {
	   	y=(x>>m)<<(16-n);
	   	printf("%hu\n",y);
	   }
	   else printf("Error!\n");
	   return 0;
}
