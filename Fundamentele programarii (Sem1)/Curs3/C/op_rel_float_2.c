#include <stdio.h>
#include <limits.h>

int main()
{
   float a = 1.1;

   printf ("a este %f\n", a);
   printf ("dimensiunea lui a este: %zu\n", sizeof(a));

   printf ("\n---------------------------\n");
   printf ("a == 1.1 este: %i\n", (a == 1.1));
   printf ("a == 1.1f este: %i\n", (a == 1.1f));
   printf ("dimensiunea lui 1.1 este: %zu\n", sizeof(1.1));
   printf ("dimensiunea lui 1.1f este: %zu\n", sizeof(1.1f));
   return 0;
}
