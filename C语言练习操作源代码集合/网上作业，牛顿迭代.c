#include <stdio.h>

float f1(float x)
{
	float a;
	a=3*x*x*x-4*x*x-5*x+13;
	return a;
}
float f2(float x)
{
	float b;
	b=9*x*x-8*x-5;
	return b;
}
int main()
{
	float a=2.0;
	float b;
	b=a-f1(a)/f2(a);
	while(a-b>1e-6||a-b<-1e-6)
	{
	a=b;
	b=a-f1(a)/f2(a);
	}
	printf("%lf\n",b);
	return 0;
}
