#include<stdio.h>
int main()
{
	char name[100][20]; 
	int  grade[100]; 
	char change[20]; 
	int n,integer; 
	scanf("%d",&n);
	char d=getchar();
	int i,j;
	for(i=0;i<n;i++)  
	{	for(j=0;j<20;j++)
		{
			scanf("%c",&name[i][j]);
			if(name[i][j]==' ') 
			{	scanf("%d",&grade[i]);
				d=getchar();
				break;
			}
		}
	}
	int p; 
	for(i=0;i<n;i++)           
	{	 p=0;
		for(j=0;j<20;j++)
		{
			if (name[i][j]==' ')
			{
				for(p=j;p<20;p++)
					name[i][p]=' ';
		
			}
				if(p==20)
				break;
			
		}
	}
	int k;
	for(i=0;i<n-1;i++)
	{ 	for(k=0;k<n-1-i;k++)
		{
			if(grade[k]<grade[k+1])
			{
				integer=grade[k];
				grade[k]=grade[k+1];
				grade[k+1]=integer; 
				for(j=0;j<20;j++) 
				{
					change[j]=name[k][j];
				} 
			  	for(j=0;j<20;j++)
			 	{	
			 		name[k][j]=name[k+1][j];
			 	}
			 	for(j=0;j<20;j++)
			 	{
					name[k+1][j]=change[j];
			 	} 
			}
		}
		
	}
	 for(i=0;i<n;i++)
	{	
		for(j=0;j<20;j++)
		printf("%c",name[i][j]);
		printf(" %d\n",grade[i]);
	}
	printf("\n");


	int search;
	
	
	scanf("%d",&search);
	int low,high,mid;
	
	low=0;high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(grade[mid]==search)
		{
			for(j=0;j<20;j++)
			printf("%c",name[mid][j]);
			printf(" %d\n",grade[mid]); 
			break;	
		} 
		else
		{
			if(grade[mid]>search)
			low=mid+1;
			else
			high=mid-1;
		}
	}
	if(low>high)
	printf("not found!\n"); 

	return 0;
}
