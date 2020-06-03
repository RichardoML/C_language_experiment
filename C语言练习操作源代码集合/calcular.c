 #include <stdio.h>
 #include <math.h>
 void main(void)
 {
 	float a,b,c,d,x1,x2;
 	printf("please input three data.\n");
 	printf("a=");scanf("%f",&a);
 	printf("b=");scanf("%f",&b);
 	printf("c=");scanf("%f",&c);
 	printf("------------\nresult is as follows:\n");
 	if(a!=0)
{
	      d=b*b-4*a*c;
	      if(d>=0)	
{
		      x1=(-b+sqrt(d))/(2*a);
		      x2=(-b-sqrt(d))/(2*a);
		      printf("two real roots x1=%f,x2=%f",x1,x2); 
}         else printf("no real root");
}   else printf("no quadratic equation");
}
