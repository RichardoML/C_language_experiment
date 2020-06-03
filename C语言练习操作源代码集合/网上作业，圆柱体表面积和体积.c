#include <stdio.h>
#define PI 3.1415926
int main()
{
	float S,V;
	int N,i;
	float r[N],h[N];
	scanf("%d",&N);
	for(i=0;i<=N-1;i=i+1)
		scanf("%f %f",&r[i],&h[i]);
	for(i=0;i<=N-1;i=i+1)
	{
		V=PI*r[i]*r[i]*h[i];
		S=PI*r[i]*r[i]*2+2*PI*r[i]*h[i];
		printf("%.6f %.6f\n",S,V);
	}
	return 0;
 } 
