#include <stdio.h>

int main()
{
   int s;
   float b;
   char c;
   printf("Introduceti un numar intreg:");
   scanf ("%d", &s);
   printf ("Ati introdus numarul %d\n",s);
   printf("Introduceti un numar rational:");
   scanf ("%f", &b);
   printf ("Ati introdus numarul %f\n",b);
   printf("Introduceti un caracter:");
   scanf (" %c", &c);
   printf ("Ati introdus caracterul %c\n",c);
   return 0;
}

