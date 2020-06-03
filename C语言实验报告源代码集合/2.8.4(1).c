#include<stdio.h>
int main()
{
	long num;

	scanf("%ld",&num);
	char * pn=&num;
	char lowbyte[4],highbyte[4];
	int mask=0xf;
	int i;
	for(i=0;i<4;i++)
	{
		if((mask&(num>>i*8))>=10)
		lowbyte[i]=(mask&(num>>i*8))+55;
		else
		lowbyte[i]=48+(mask&(num>>i*8));
		if((mask&(num>>(i*8+4)))>=10)
		highbyte[i]=((mask&(num>>i*8+4)))+55;
		else
		highbyte[i]=48+(mask&(num>>(i*8+4)));
	}
	for(i=3;i>=0;i--)
	printf("%c%c",highbyte[i],lowbyte[i]);
	return 0;
	
}
