#include <stdio.h>
int main(void)
{
	int i,n,m;//i��ʾmaskλ�ƵĴ�����n��ʾ�������ĸ�����m��ʾ�������ڴ���ĵ�m���� 
	scanf("%d",&n);
	unsigned long int b;
	unsigned long int num[n];
	unsigned long int mask=255;
	
	for(m=0;m<=n-1;m++)                //��������һ����ֵ 
{	scanf("%lu",&num[m]);

	 for(i=0;i<=3;i++)               //��һ����ת���ɶ�Ӧ��ip��ַ��ʽ 
	{
		b=((mask<<(i*8))&num[m])>>(i*8);
		printf("%lu",b);
		if(i!=3) putchar('.');
		else putchar('\n');
	}   }                            //��һ����ת������ip��ַ��ʽ 


return 0;
}
