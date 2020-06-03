#include <stdio.h>
int main()
{
	int a;
	printf("please input a year:");
	scanf("%d",&a);
	!(a%4)&&(a%100)||(a%400)?printf("29"):printf("28");
	return 0;
}
