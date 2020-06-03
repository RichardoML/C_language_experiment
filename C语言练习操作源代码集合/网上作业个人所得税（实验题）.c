#include <stdio.h>
int main()
{  double a, b; 

   scanf("%lf",&a);
   while(a!=0)
   {
   int c=a; 
   switch(c/1000)
   {case 0:b=0; printf("%.6lf\n",b); break;
    case 1:b=0.05*(a-1000); printf("%.6lf\n",b); break;
    case 2:b=50+0.1*(a-2000); printf("%.6lf\n",b); break;
    case 3:b=150+(a-3000)*0.15; printf("%.6lf\n",b); break;
    case 4:b=300+(a-4000)*0.2; printf("%.6lf\n",b); break;
	default :b=500+0.25*(a-5000); printf("%.6lf\n",b); break;
   	}
   	scanf("%lf",&a);
	
   } 
   return 0;}
 
