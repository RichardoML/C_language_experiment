#include<stdio.h>
int main()
{
	long num;
	scanf("%ld",&num);
	char highbyte[4][4],lowbyte[4][4];
	long mask=0x1;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((num>>((i*8)+j))&mask)
			lowbyte[i][j]='1';
			else
			lowbyte[i][j]='0';
		}
		for(j=0;j<4;j++)
		{
			if((num>>(i*8)+j+4)&mask)
		 	highbyte[i][j]='1';
		 	else
		 	highbyte[i][j]='0';
		 	
		 } 
	 }
	 for(i=3;i>=0;i--)
	 {
	 	for(j=3;j>=0;j--)
	 	printf("%c",highbyte[i][j]);
	 	for(j=3;j>=0;j--)
	 	printf("%c",lowbyte[i][j]);
	  } 
	  return 0;
 } 
