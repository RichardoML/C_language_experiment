#include<stdio.h>
int strlength(char c[])
{
	int i=0;
	while (c[i]!='#')
	i+=1;
	return i;
}
int main()
{
char c[100];
int i=0;
c[0]=getchar();
while(c[i]!='#')
{
	i+=1;
	c[i]=getchar();
}
int n=strlength(c); 
int num[12]={0,0,0,0,0,0,0,0,0,0,0,0};
for(i=0;i<=n-1;i++)
{
	switch(c[i]){
	
	case 48:num[0]+=1;continue;
	case 49:num[1]+=1;continue;
	case 50:num[2]+=1;continue;
	case 51:num[3]+=1;continue;
	case 52:num[4]+=1;continue;
	case 53:num[5]+=1;continue;
	case 54:num[6]+=1;continue;
	case 55:num[7]+=1;continue;
	case 56:num[8]+=1;continue;
	case 57:num[9]+=1;continue;
	default:{
				if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))
				{	num[10]+=1;
					continue;
				}
				else
				{	num[11]+=1;
					continue;
				}
			}
		}} 
	for(i=0;i<=9;i++)
	printf("Number %d: %d\n",i,num[i]);
	printf("characters: %d\n",num[10]);
	printf("other: %d\n",num[11]);
return 0; 
} 	

