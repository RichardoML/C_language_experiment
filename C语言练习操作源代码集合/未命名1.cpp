#include <stdio.h> 
int main()
{  int a,b;
 
   b=scanf("%d",&a);
   while(b==1){ 
	!(a%3)&&(a%10==5)?printf("1\n"):printf("0\n");
	b=scanf("%d",&a); 
	} 
	return 0;
	
}
