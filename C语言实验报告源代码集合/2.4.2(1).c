#include <stdio.h>
long sum_fac(int n);
int main(void)
{
	int k,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
		printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
	return 0;
 } 
 long sum_fac(int n)
 {
 
 	int i=n;
 	static long s=0;
    static long fac=1;
	fac*=i;
 	s+=fac;
	return s;
 }
