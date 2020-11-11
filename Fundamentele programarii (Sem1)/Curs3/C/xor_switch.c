#include <stdio.h>

#include <stdio.h>

int main()
{
   char a = 13;
   char b = 28;
   printf ("inainte: a: %d, b: %d\n", a,b);

   a = a ^ b;
   b = b ^ a;
   a = a ^ b;

   printf ("dupa: a: %d, b: %d\n", a,b);

}
