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
	}//先初始化数组，全部变成0； 
	//先把第一行放一个，有八种放法 
	 for(n=0;n<8;n++)
	 {	
		eightqueens[row[0]][column[n]]=1;
		//把第一行第column列设置成1，其他设置成0； 
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
