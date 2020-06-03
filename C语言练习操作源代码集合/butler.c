#include <stdio.h>
void show(char str[]);
int main(void)
{
	char name[20];
	int i=0;
	
	printf("please input your name\n");
	scanf("%s",&name); 
	printf("please input a random number\n");
	scanf("%d",&i);
	 
	if(i<=100)
	{
	show (name);
	}
	else
	printf("NO!NO!No! the number is too big.\n");
	return 0;
 } 
 void show(char str[])
 {
 	printf("%s",str);
 }
 
