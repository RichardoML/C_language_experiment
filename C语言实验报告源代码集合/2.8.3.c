#include<stdio.h>
char* strcpy(char*,char*);
int main(void)
{
	char a[40],b[60]="there is a boat on the lake.";
	printf("%s\n",strcpy(a,b));
	return 0;
 } 
 char* strcpy(char*s,char*t)
 {	char* p=s;
 	while(*s++=*t++)
 	;
 	return (p);
 }
