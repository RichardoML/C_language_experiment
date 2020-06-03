#include <stdio.h>
int main()
{	
	int year,month,day,i,n;
	while (scanf("%d%d%d",&year,&month,&day)!=-1)
	{
		
	
	if(((!(year%4))&&(year%100))||(!(year%400)))
	{	n=0;
		int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<=month-2;i++)
		n+=a[i];
		n=n+day;
		printf("该日期是这一年中的第%d天\n",n);
	}
	else
		{	n=0;
			int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			for(i=0;i<=month-2;i++)
			n+=b[i];
			n+=day;
			printf("该日期是这一年中的第%d天\n",n);
		}
		
	}
	return 0;
}
