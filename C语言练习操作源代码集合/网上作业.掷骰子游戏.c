#include <stdio.h>
int suijishu(unsigned int a)
{
	unsigned int sum=0;//a��Ϊ������,n��Ϊ��������λ����֮��
	int b;//b��ʾ��������ͣ����λ�ü������ӵõ��ĵ��� 
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	b=sum%6+1;
	return b;
 }
  int main()
  {
  	int i,j;
  	scanf("%d",&i);
  	for(j=1;j<=i;j++)
	  {
	  
  	
  	
  	unsigned int a1,a2;
  	int n=1;
  	scanf("%u%u",&a1,&a2);
  	int sum,summ;//sum��ʾ��һ�ε���������֮�ͣ�summ��ʾ���� 
  	sum=suijishu(a1)+suijishu(a2);
  	switch(sum)
  	{
  		case 7:;
		case 11:printf("success!\n");break;
		case 2:;
		case 3:;
		case 12:printf("fail!\n");break;
		default :{    L:n=n+1;
					summ=suijishu(a1+n-1)+suijishu(a2+n-1);
					if(summ==sum)
					{
					printf("success!\n");break;
				    }
					if(summ==7)
					{
					printf("fail!\n");break; 
					}
					goto L;
			   	 }	
		  
		  	
	}}
	return 0;
  }
