#include <stdio.h>
#define PI 3.1415926
int main()
{
	double r,h,s,v;
	int N,i;
	scanf("%d",&N);
	for(i=0;i<=(N-1);i++)
	{
		scanf("%lf %lf",&r,&h);
		 v=PI*r*r*h;
		s=PI*r*r*2+2*PI*r*h;
		printf("%.6lf %.6lf\n",s,v);
	}
return 0; 
}
