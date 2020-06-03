#include <stdio.h>
int yueshu(int a,int b,int i)
{ 
	if((!(a%i))&&(!(b%i)))
	return i;
	else
	return yueshu(a,b,i-1); 
}
int beishu(int a,int b,int j)
{
	if((!(j%a))&&(!(j%b)))
	return j;
	else
	return beishu(a,b,j+1); 
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while((a!=0)||(b!=0))
	{
		if(a>b)
		printf("%d %d\n",yueshu(a,b,b),beishu(a,b,a));
		else
		printf("%d %d\n",yueshu(a,b,a),beishu(a,b,b));
		scanf("%d%d",&a,&b);
	}
	
	return 0;
 } 
