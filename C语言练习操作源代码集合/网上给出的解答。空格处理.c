#include <stdio.h>
#define EM 0 /*û�пո�*/
#define BS 1 /*����һ���ո�*/

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

