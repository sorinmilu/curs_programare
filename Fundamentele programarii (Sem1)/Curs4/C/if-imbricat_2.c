#include <stdio.h>

int main()
{
   int a = 4;
   if (a > 3) {
       printf("Inainte de if\n");
       if (a < 8) {
           printf("check\n");
       }
       printf("Dupa if\n");
   }
   return 0;
}
