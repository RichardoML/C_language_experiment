#include <stdio.h>
#define EM 0 /*没有空格*/
#define BS 1 /*当有一个空格*/

main()
{
int c, k, sign;

k = ' '; 
sign = EM;
while ((c = getchar()) != EOF){
if (c == k)
++sign;
if (sign == BS){
putchar(c);
++sign;
}
else if (c != k){
sign = EM;
putchar(c);
}
}
}

