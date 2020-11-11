#include <stdio.h>
#include <limits.h>

int main()
{
   unsigned char a = 211;
   unsigned char b = 181;
   unsigned char c =  ~a;
   unsigned char d =  a<<3;

   printf ("a este: %i\n", a );
   printf ("b este: %i\n", b);
   printf ("--------------------------\n");

   printf ("Binary AND este: %i\n", a & b);
   printf ("Binary OR este: %i\n", a | b);
   printf ("Binary XOR este: %i\n", a ^ b);
   printf ("Binary Ones pentru a este: %i\n", c);
   printf ("Left shift 3 pentru a este: %i\n", d);
   printf ("Right shift 3 pentru a este: %i\n", a>>3);

   return 0;
}

