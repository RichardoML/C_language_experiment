#include <stdio.h>
int main(void)
{
	int i,n,m;//i表示mask位移的次数，n表示输入数的个数，m表示的是正在处理的第m个数 
	scanf("%d",&n);
	unsigned long int b;
	unsigned long int num[n];
	unsigned long int mask=255;
	
	for(m=0;m<=n-1;m++)                //连续输入一列数值 
{	scanf("%lu",&num[m]);

	 for(i=0;i<=3;i++)               //把一个数转换成对应的ip地址形式 
	{
		b=((mask<<(i*8))&num[m])>>(i*8);
		printf("%lu",b);
		if(i!=3) putchar('.');
		else putchar('\n');
	}   }                            //把一个数转换成了ip地址形式 


return 0;
}
