#include<stdio.h>
#define student N
#define course  M



float fun1(int *s,int n)//����ÿ��ѧ�����Ƶ�ƽ���� 
{	float average;
	int i,sum=0;
	for(i=0;i<n;i++)
	 sum+=*(s+i);
	 average=(float)sum/n;
	 return average;

}



float fun2(int*s,int n,int m)//����ÿ�ſε�ƽ���� sΪ��һ��ĳһ�еĵ�ַ 
{
	int i,sum=0;
	float average;
	for(i=0;i<n;i++)
		sum+=*(s+i*m);
	average=(float)sum/n;
	return average;
}

int fun3(float s,int* t,int n,int m)//ͳ�Ƶ���ȫ����ſγ̵�ƽ���ɼ������� 
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(t+i*m)<s)
		sum+=1;
	}
	return sum;
}

int bujige(int* t,int n,int m)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(t+i*m)<60)
		sum++;	
		
	}
	return sum;
}

int aboveninty(int*t,int n,int m)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(t+i*m)>=90)
		sum++;
	}
	return sum;
}

 
int main()
{	int N,M;
	printf("student:\n");
	scanf("%d",&N);
	printf("course:\n");
	scanf("%d",&M);
	getchar();
	char coursename[M][20];
	int i,j;
	printf("����ÿ�ſε����ƣ�\n"); 
	for(i=0;i<M;i++)
		scanf("%s",&coursename[i]);
	for(i=0;i<M;i++)
		printf("%10s",coursename[i]);
	printf("\n");
	printf("����ÿ��ѧ���ĸ��Ƴɼ���\n");
	int grade[N][M];
	int* p[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			p[i][j]=&grade[i][j];
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			scanf("%d",p[i][j]);
	 }
	 printf("ÿ�˸��Ƶ�ƽ���ɼ�Ϊ:\n"); 
	 for(i=0;i<N;i++)
		 printf("%f\n",fun1(grade[i],M));
	 printf("���Ƶ�ƽ���ɼ�Ϊ��\n"); 
	 for(j=0;j<M;j++)
		printf("%f\t", fun2(&grade[0][j],N,M));
	printf("\n");
	
	float courseaverage[M];
	for(j=0;j<M;j++)
		courseaverage[j]=fun2(&grade[0][j],N,M);
	printf("���Ƶ���ƽ���ֵ�������\n"); 
	for(j=0;j<M;j++)
		printf("%d\t", fun3(courseaverage[j],&grade[0][j],N,M));
	printf("\n���Ʋ�����������У�\n");
	for(j=0;j<M;j++)
		printf("%d\t",bujige(&grade[0][j],N,M));
	printf("\n���Ƴɼ���90�����ϵ�����:\n");
	for(j=0;j<M;j++)
		printf("%d\t",aboveninty(&grade[0][j],N,M));
	return 0; 
}
