#include <stdio.h>
enum month{ jan=31,feb,mar=31,apr=30,may=31,jun=30,jul=31,aug=31,spet=30,oct=31,nov=30,dec=31};
int main ()
{
	int a;
	enum month c;
	char *monthname[]={"January","February","March","April","May","June",
	"July","August","Spetemmber","October","November","December"};
	 return 0;
    scanf("%d",&a);
    (!(a%4)&&(a%100))||!(a%400)?feb=29:feb=28;
	for(c=jan;c<=dec;c++)
	{
		printf("%s      %d",monthname[c],c);
		
	 } 
	 return 0;
}
