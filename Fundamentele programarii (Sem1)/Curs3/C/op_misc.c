#include <stdio.h>

int main()
{
   int a = 211;
   printf ("a este: %i\n", a );
   printf ("--------------------------\n");
   printf ("Dimensiunea variabilei a este: %zu \n", sizeof(a));
   printf ("Adresa de memorie a variabilei a este: %p \n", &a);
   printf ("a este mai mare decat 23: %i \n", (a > 23?1:0));
   return 0;
}

