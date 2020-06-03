#include<stdio.h>
int main()
{
	char name[100][20];//用一个数组name[i]来存储一个人名，name[i][j]为人名的某个之母 
	int  grade[100];//用一个数组grade存储每个人的成绩。与名字一一对应 
	char change[20]; //change支付串等会用来交换人名时使用 
	int n,integer;//integer用来交换成绩，n控制组数 
	scanf("%d",&n);
	char d=getchar();//除掉在输入n之后键入的换行符 
	int i,j;
	for(i=0;i<n;i++)//第i+1个人的名字 
	{	for(j=0;j<20;j++)//名字的字母组成 
		{
			scanf("%c",&name[i][j]);
			if(name[i][j]==' ')/*当遇到空格的时候，说明名字已经输入完了，后面接着时成绩*/ 
			{	scanf("%d",&grade[i]);
				d=getchar();
				break;
			}
		}
	}
	int p; 
	for(i=0;i<n;i++)            //把每个名字数组后面都变成空格 
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
	//以上是输入部分
	/*下面是用冒泡排序法进行排序的过程*/
	int k;
	for(i=0;i<n-1;i++)
	{ 	for(k=0;k<n-1-i;k++)
		{
			if(grade[k]<grade[k+1])
			{
				integer=grade[k];
				grade[k]=grade[k+1];
				grade[k+1]=integer;//交换两个数   ok 
				for(j=0;j<20;j++)//以下是交换两个名字 
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
	//以上是排序过程
	//int m,search[m];
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
	printf("Not found!\n"); 

	return 0;
}
