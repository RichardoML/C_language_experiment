#include <stdio.h>
int main()
{	
	int year,month,day,i,j,n,N;
	scanf("%d",&N); 
	for(j=1;j<=N;j++)
	{
	
	scanf("%d%d%d",&year,&month,&day)!=-1;
	
		
	
	if(((!(year%4))&&(year%100))||(!(year%400)))
	{	n=0;
		int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<=month-2;i++)
		n+=a[i];
		n=n+day;
		printf("%d\n",n);
	}
	else
		{	n=0;
			int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			for(i=0;i<=month-2;i++)
			n+=b[i];
			n+=day;
			printf("%d\n",n);
		}
	}
	
	return 0;
}
