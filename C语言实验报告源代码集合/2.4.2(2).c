#include <stdio.h>
float sum_fac(int n);
int main(void)
{
	int k;
	scanf("%d",&k);
	printf("k=%d\tthe sum is %lf\n",k,sum_fac(k));
	return 0;
 } 
 float sum_fac(int n)
 {
 	float s=0.0;
 	int i;
 	long fac=1;
 	for(i=1;i<=n;i++)
 	{
		fac*=i;
 		s+=1.0/fac;
	 }
 	return s;
 }
