#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);//�����������
	int n=sizeof(int)*8;
	char c[n];
	int num[n];
	int mask=0x1;
	int i;
	for(i=0;i<n;i++)
	{	
		if(num[i]=mask&(a>>i))
			c[i]='1';
		else
			c[i]='0';
	} 
	for(i=n-1;i>=0;i--)
		printf("%c",c[i]);
	return 0;
}
