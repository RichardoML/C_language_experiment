#include "stdio.h"
#include <limits.h>
void PrintBit(int x);
int main(){
	int a;
	scanf("%d",&a);
	PrintBit(a);
	return 0;
}
void PrintBit(int x )
{   int CHARBIT=8;
	int i ;
	int n=sizeof(int) * CHAR_BIT;
	int mask=1<<n-1;
	for(i=1;i<=n;++i)
	{
		putchar(!(x&mask)?'0':'1');
		x<<=1;
		if(!(i%CHAR_BIT) && i<n ) putchar (' ');
		
	}
}
