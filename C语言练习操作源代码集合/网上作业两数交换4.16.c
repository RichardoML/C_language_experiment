#include "stdio.h"
#define swap(x,y) y,x
int main()
{
	int N,i;
	i=1;
	scanf("%d",&N);
	for(;i<=N;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		printf("%d %d\n",swap(x,y));
	}
	return 0;
	
}
