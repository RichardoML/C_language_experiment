#include <stdio.h>
int main()
{
	int i,n,s;
	i=1;
	n=1;
	printf("Please enter s:");
	scanf("%d",&s);
	while(i<s){
		n=n+1;
		i=i*n;
	
	}
	printf("n=%d",n);

	
	return 0;
}
