#include <stdio.h>
int main()
{
	int x,n,m;
	scanf("%d%d",&x,&n);
	 m=sizeof(int)*8;
	 n=n%m;
	 x=(x<<m-n)|(x>>n);
	 printf("%d\n",x);
	 return 0;
	
}
