#include"stdio.h"
int gongyue(int a,int b,int i)
{  

	
	if((!(a%i))&&(!(b%i)))
	return i;
	else 
	return gongyue(a,b,--i);
	
	
}
int main(void)
{
	int a1,a2;
	scanf("%d%d",&a1,&a2);

	if(a1<=a2)
	{
		printf("%d\n",gongyue(a1,a2,a1));
	}
	else
		printf("%d\n",gongyue(a2,a1,a2));
	return 0;
	
 } 
