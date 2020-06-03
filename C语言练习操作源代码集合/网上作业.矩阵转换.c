#include<stdio.h>
int main()
{
	int a[3][4],b[4][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		b[j][i]=a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%5d",a[i][j]); 
		printf("\n");
	}
	printf("\n");
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		printf("%5d",b[j][i]); 
		
		printf("\n");
	}
} 
