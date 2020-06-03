#include <stdio.h>
int main()
{int i=0;
char c,a;
int n,j;
scanf("%d",&n);
a=getchar();
for(j=1;j<=n;j++)
{i=0;
while(c=getchar()!='\n')
i++;
printf("%d\n",i);	
}

return 0;
} 
