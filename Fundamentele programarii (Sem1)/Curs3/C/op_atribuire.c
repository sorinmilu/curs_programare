#include <stdio.h>

int main()
{
   int a = 211;
   int b = 100;
   printf ("a este: %i\n", a );
   printf ("b este: %i\n", b);
   printf ("--------------------------\n");
   printf ("b += a este: %i\n", b += a);
   printf ("b este acum: %i\n", b);
   b = 100;
   printf ("b -= a este: %i\n", b -= a);
   printf ("b este acum: %i\n", b);
   b = 100;
   printf ("b *= a este: %i\n", b *= a);
   printf ("b este acum: %i\n", b);
   b = 100;
   printf ("a /= b (intreg) este: %i\n", a /= b);
   printf ("a este acum: %i\n", a);
   a = 211;
   printf ("a %%= b este: %i\n", a %= b);
   printf ("a este acum: %i\n", a);
   return 0;
}
