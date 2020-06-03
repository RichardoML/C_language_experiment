#include "stdio.h"
# define PI 3.14159 
int   main() 
{
	int f;
	short p,k;
	double c,r,s;
	/*for task 1*/
	
	printf("input Fahreneit:");
	scanf("%d",&f);
	c=5.0/9*(f-32);
	printf("\n%d(F)=%2.f(C)\n\n",f,c);
	/*for task 2*/
	
	printf("input the radius r :");
	scanf("%lf",&r);
	s=PI*r*r;
	printf("\nThe acreage is %.2f\n\n",s);
	/*for task 3*/
	int newint;
	printf("input hex int k,p:");
	scanf("%h%h",&k,&p);
	newint=(p&0xff00)|((k&0xff00)>>8);
	printf("new int =%d\n\n",newint);
	 
	 return 0;
	
	
	
	
} 
