#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
 	b=((!(a%4)&&(a%100)))||(!a%400);
 	printf("%d",b);
	return 0;
}
