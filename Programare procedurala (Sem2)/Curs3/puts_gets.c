//gcc -Wall puts_gets.c -o puts_gets

#include <stdio.h>

int main()
{

   char cuvant[100];
   puts("introduceti un cuvânt:");
   gets(cuvant);
   puts(cuvant);

   return 0;
}
