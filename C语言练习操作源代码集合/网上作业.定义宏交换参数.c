#include "stdio.h"
#define Swap(x,y) y,x
int main()
{
	int x,y;
	int i=0;
	while(scanf("%d%d",&x,&y)!=-1)
	{	i=i+1;
		printf("Case %d:\n",i);
		printf("Before Swap:a=%d b=%d\n",x,y) ;
		printf("After Swap:a=%d b=%d\n\n",Swap(x,y)) ;
		
	} 
	return 0;
}
