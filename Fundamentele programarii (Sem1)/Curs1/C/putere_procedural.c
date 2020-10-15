/*

 Programul trebuie intai compilat, se obtine un executabil care apoi se poate executa singur
   Compilarea se face:
    linux (gcc): gcc -Wall -o putere_procedural putere_procedural.cpp

*/

#include <stdio.h>

int putere(int m, int n);

int main()
{
   int a=3, b=5;
   int c = putere(a, b);
   printf("%d la puterea %d este %d\n",a,b,c);
   return 0;
}

int putere(int m, int n)
{
   int i, p=1;
   for (i=1; i<=n; i++) {
       p = p * m;
   }
   return p;
}
