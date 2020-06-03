#include <stdio.h>
#include <math.h>
#define s(a,b,c) ((a)+(b)+(c))/2
#define area(a,b,c,s) sqrt(((s)*((s)-(a))*((s)-£¨b))*((s)-(c))))
int main()
{ int a,b,c,d,e;
 while(scanf("%d%d%d",&a,&b,&c)!=-1)
 {
 	printf("%d ",s(a,b,c));
 	d=s(a,b,c);
 	e=area(a,b,c,d);
	printf("%f\n",e);
 } 
  return 0;
	
} 
