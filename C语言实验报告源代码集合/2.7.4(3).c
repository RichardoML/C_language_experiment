#include<stdio.h>
int main()
{
	char name[100][20];//��һ������name[i]���洢һ��������name[i][j]Ϊ������ĳ��֮ĸ 
	int  grade[100];//��һ������grade�洢ÿ���˵ĳɼ���������һһ��Ӧ 
	char change[20]; //change֧�����Ȼ�������������ʱʹ�� 
	int n,integer;//integer���������ɼ���n�������� 
	scanf("%d",&n);
	char d=getchar();//����������n֮�����Ļ��з� 
	int i,j;
	for(i=0;i<n;i++)//��i+1���˵����� 
	{	for(j=0;j<20;j++)//���ֵ���ĸ��� 
		{
			scanf("%c",&name[i][j]);
			if(name[i][j]==' ')/*�������ո��ʱ��˵�������Ѿ��������ˣ��������ʱ�ɼ�*/ 
			{	scanf("%d",&grade[i]);
				d=getchar();
				break;
			}
		}
	}
	int p; 
	for(i=0;i<n;i++)            //��ÿ������������涼��ɿո� 
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
	//���������벿��
	/*��������ð�����򷨽�������Ĺ���*/
	int k;
	for(i=0;i<n-1;i++)
	{ 	for(k=0;k<n-1-i;k++)
		{
			if(grade[k]<grade[k+1])
			{
				integer=grade[k];
				grade[k]=grade[k+1];
				grade[k+1]=integer;//����������   ok 
				for(j=0;j<20;j++)//�����ǽ����������� 
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
	//�������������
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
