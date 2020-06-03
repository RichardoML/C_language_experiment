#include <stdio.h>
#include <limits.h>
void PrintBit(int x);

int main()
{    
    int a,b,p,n;
    int i;

    
	scanf("%d%d%d",&a,&p,&n );
    b=(~a)^~(((((0xffffffff)<<(32-p-n))>>(32-n)))<<(p));
	PrintBit(a);
	printf("\n");
	PrintBit(b);
	return 0;
 } 
  void PrintBit(int x)
  {
  	int i;
  	int n=sizeof(int)*CHAR_BIT;
  	int mask=1<<(n-1);
  	for(i=1;i<=n;++i){
	  putchar(!(mask&x)?'0':'1' );
	  x<<=1;
	  if(!(i%CHAR_BIT)&&i<n)
	  putchar(' ');
	   } 
  }
