#include "stdio.h"
int main()
{
	unsigned short x,m,n,N,i;
	unsigned short num[N];
	scanf("%hu",&N);
	
	for(i=0;i<=N-1;i++){
	scanf("%hu%hu%hu",&x,&m,&n); 
	num[N]=(x>>m)<<(16-n);
	printf("%hu\n",num[N]); }
	
	return 0;
 } 
