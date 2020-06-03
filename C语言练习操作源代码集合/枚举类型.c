#include <stdio.h>
int main()
{
   enum week { SUN,MON,TUES,WED,THU,FRI,SAT};
   enum week day;
   char *weekname[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"} ;
   for (day=SUN;day<=SAT;day++)
   {
   	printf("%s\n",weekname[day]);

   }
   return 0;
}
