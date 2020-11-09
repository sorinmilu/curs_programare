#include <stdio.h>
#include <limits.h>

int main()
{
   float a = 1.1;
   float b = 2.2;
   float c = 3.3;
   float d = a + b;

   printf ("a este %f\n", a);
   printf ("b este %f\n", b);
   printf ("c este %f\n", c);
   printf ("d este %f\n", d);
   printf ("c == d este: %i\n", (c == d));
   printf ("\n---------------------------\n");
   printf ("dimensiunea lui a este: %zu octeti\n", sizeof(a));
   printf ("dimensiunea lui b este: %zu octeti\n", sizeof(b));
   printf ("dimensiunea lui c este: %zu octeti\n", sizeof(c));
   printf ("dimensiunea lui d este: %zu octeti\n", sizeof(d));
   return 0;
}
