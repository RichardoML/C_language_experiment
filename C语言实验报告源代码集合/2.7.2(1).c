#include<stdio.h>
#define num 8
int main()
{
	int eightqueens[num][num];
	int sum=0;
	int row[8],column[8];
	int m=0;
	for(m=0;m<8;m++)
	{
		row[m]=m;
		column[m]=m;
	}
	int n;
	for(m=0;m<8;m++)
	{
		for(n=0;n<8;n++)
		eightqueens[row[m]][column[n]]=0;
	}//�ȳ�ʼ�����飬ȫ�����0�� 
	//�Ȱѵ�һ�з�һ�����а��ַŷ� 
	 for(n=0;n<8;n++)
	 {	
		eightqueens[row[0]][column[n]]=1;
		//�ѵ�һ�е�column�����ó�1���������ó�0�� 
	int p;
		for(p=0;p<8;p++)
		{	
			if(p!=n)
			{
				if((n==0)&&(p!=1))
				{
					if(
				}
			}
		 } 
		
	 	
	 }
}
