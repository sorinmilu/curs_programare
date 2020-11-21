#include <stdio.h>

int main()
{
   int a = 10;

   while (a < 10) {
       printf("while a = %d\n", a);
       a++;
   }

   a = 10;

   do {
       printf("do a = %d\n", a);
       a++;
   } while (a < 10);

   return 0;
}
