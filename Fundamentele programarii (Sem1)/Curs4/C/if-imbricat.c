#include <stdio.h>

int main()
{
   int a = 4;

   if (a > 3 && a < 8) {
       printf("check\n");
   }

   if (a > 3) {
       if (a < 8) {
           printf("check\n");
       }
   }
   return 0;
}
