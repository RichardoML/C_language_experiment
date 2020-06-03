#include"stdio.h"
#include"math.h"
int sushu(int x)
{
	int i=2;
	int b,r;
	r=1;
	b=sqrt(x);
	for(i=2;i<=b;i++)
	{
		if(!(x%i))
		{
			r=0;
			break;
		}
		else
			r=1;
	}
	return r;
}
int main()
{
	int begin,end,i,j;
	i=2;
	scanf("%d",&begin);
	scanf("%d",&end);
		
while((begin!=0)&&(begin>=6)&&(begin<=end)&&(end<=100))
{ 

	if(!(begin%2))
	{
		for(;begin<=end;)
		{	i=2;
			j=begin-i;
			for(i=2;i<=j;)
			{
				if(sushu(i)&&sushu(j))
				{
					printf("%d=%d+%d\n",begin,i,j);
	    			break;
	    		}
				i=i+1;
				j=begin-i;
			}
			begin=begin+2;
		}	
	}
	if(begin%2)
	{
		begin=begin+1;
		for(;begin<=end;)
		{ i=2;
			j=begin-i;
			for(i=2;i<=j;)
			{
				if(sushu(i)&&sushu(j))
				{
					printf("%d=%d+%d\n",begin,i,j);
	      			 break;
	    		}
				i=i+1;
				j=begin-i;
			}
			begin=begin+2;
		}
	} printf("\n"); 
	scanf("%d",&begin);
	scanf("%d",&end);
	
	 
}

return 0;}
