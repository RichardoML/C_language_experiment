#include<stdio.h>
int main(void)
{	float f;
	float * p;
	p=&f;
	scanf("%f",p);
	printf("%f\n",*p);
	return 0;
} 
