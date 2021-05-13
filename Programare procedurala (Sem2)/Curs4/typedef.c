//gcc -Wall typedef.c -o typedef

#include <stdio.h>

typedef int asprete;
typedef char salau;
typedef float babusca;
typedef short int platica;

int main()
{
   asprete lng = 12213;
   salau cr = 'd';
   salau decl[] = "Nu stiu nimic";
   babusca srs = 12.6576;
   platica mm = 12;

   printf("lng: %d\n", lng);
   printf("cr: %c\n", cr);
   printf("decl: %s\n", decl);
   printf("srs: %f\n", srs);
   printf("mm: %d\n", mm);
   return 0;
}
