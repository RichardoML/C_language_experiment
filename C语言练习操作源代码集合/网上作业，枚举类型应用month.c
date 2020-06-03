#include <stdio.h>
int main()
{
    enum month {January,February,March,April,May,June,July,August,September,October,November,December};
	int a,b;
	scanf("%d",&a);
	b=((!(a%4)&&(a%100))||(!a%400));
	if(b)
		
		printf("January,31\nFebruary,29\nMarch,31\nApril,30\nMay,31\nJune,30\nJuly,31\nAugust,31\nSeptember,30\nOctober,31\nNovember,30\nDecember,31\n");
		
	else
		
		printf("January,31\nFebruary,28\nMarch,31\nApril,30\nMay,31\nJune,30\nJuly,31\nAugust,31\nSeptember,30\nOctober,31\nNovember,30\nDecember,31\n"); 
	return 0;
}
