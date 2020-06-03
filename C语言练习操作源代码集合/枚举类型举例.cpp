#include <stdio.h>
int main()
{ 
   enum week { SUN=0,MON,TUES,WED,THU,FRI,SAT};
   enum week day;
   char *weekname[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"} ;
   for (day=SUN;day<=SAT;day=day+1)
   {
   	printf("%s",weekname[day]);
   	
   }
   return 0;
}
