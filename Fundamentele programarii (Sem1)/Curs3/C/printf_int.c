#include <stdio.h>

int main()
{
   char a = 112;
   int b = 12345;
   long int c = 543432345245;

   //Numar intreg
   printf ("%d\n", a);
   // Caracter
   printf ("%c\n", a);
   //Numar intreg
   printf ("%d\n", b);
   //Numar intreg cu dimensiunea long double
   printf ("%ld\n", c);
   //Numar intreg cu 12 cifre
   printf ("%12d\n", b);
   //Numar intreg cu 12 cifre cu 0 adaugat
   printf ("%012d\n", b);
   //Numar intreg cu 10 cifre ca parametru
   printf ("%*d\n",10, b);
   return 0;
}
