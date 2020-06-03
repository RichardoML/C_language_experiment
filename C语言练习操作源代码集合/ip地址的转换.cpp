#include <stdio.h>
int main(void)
{
	int i,n,m;
	scanf("%d",&n);
	unsigned long int num,b;
	unsigned long int mask=255;
	
	for(m=1;m<=n;m++)
{
	
	
	scanf("%lu",&num);
	for(i=0;i<=3;i++)
	{
		b=((mask<<(i*8))&num)>>(i*8);
		printf("%lu",b);
	
		if(i!=3) putchar('.');
		else putchar('\n');
	}
}
printf("\n");
	return 0;
}
