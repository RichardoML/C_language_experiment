#include <stdio.h>
int  main(void)
{
	int x;
	printf("input your salary");
	scanf("%d",&x);
	switch(x/1000)
	{
		case 0 :printf("0");break;
		case 1 :printf("%lf",(x-1000)*0.05);break;
		case 2 :printf("%lf",(x-2000)*0.1+50);break;
		case 3 :printf("%lf",(x-3000)*0.15+150);break;
		case 4 :printf("%lf",(x-4000)*0.2+300);break;
		case 5 :printf("%lf",(x-5000)*0.25+500);break;
		default :printf("%lf",(x-5000)*0.25+500);break;
	}
	return 0;
}
