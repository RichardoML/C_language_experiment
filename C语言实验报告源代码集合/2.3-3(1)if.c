#include <stdio.h>
int main()
{
	float x;
	printf("input your salary");
	scanf("%f",&x);
	if(x<0)
		printf("error");
	if(0<=x&&x<1000)
		printf("0");
	if(1000<=x&&x<2000)
		printf("%f",(x-1000)*0.05);
	if(2000<=x&&x<3000)
		printf("%f",(x-2000)*0.1+1000*0.05);
	if(3000<=x&&x<4000)
		printf("%f",(x-3000)*0.15+1000*0.1+1000*0.05);
	if(4000<=x&&x<5000)
		printf("%f",(x-4000)*0.2+300);
	if(5000<x)
		printf("%f",(x-5000)*0.25+500);
	return 0;
}
