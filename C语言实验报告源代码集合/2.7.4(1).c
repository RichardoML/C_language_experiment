#include <stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("转置前:\n");	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("转置后：\n"); 
	int b[4][3];
	for(i=0;i<4;i++)
	{
	 	for(j=0;j<3;j++)
		 {
	 		b[i][j]=a[j][i];
	  	} 
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	return 0;	
} 
