#include <stdio.h>


int main() {
   int a = 10;
   {
     int b = 18;
     printf("b in bloc este %i\n", b);
     {
       int c = 23;
       printf("b,c in bloc:  %i,%i\n", b,c);
     }
   }
   int d = 20;
   printf("a este %i\n", a);
//    printf("b este %i\n", b);
   printf("d este %i\n", d);
   return 0;
}
