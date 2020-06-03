#include "stdio.h"
int main()
{
	int f;
	float c;
	printf("input Fahrenhait");
	scanf("%d",&f);
	c=5.0/9*(f-32);
	printf("%.2f(C)",c);
	return 0;
 } 
