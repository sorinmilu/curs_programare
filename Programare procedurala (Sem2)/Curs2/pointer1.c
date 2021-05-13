//gcc -Wall pointer1.c -o 1

#include <stdio.h>

int main()
{
   int a = 100;
   printf ("a = %d\n", a);
   printf ("adresa a: %p\n", &a);

   int *pa = &a;
   printf("*pa = %p\n", pa) ;
   *pa = 120;
   printf ("a = %d\n", a);
}
