//gcc -Wall pointer_val_neinitializat.c -o pointer_val_neinitializat

#include <stdio.h>

int main()
{
   int a;
   int *aptr;
   int b;
//    a = 1021;
   aptr = &a;
   b = *aptr;
   printf ("a = %d, aptr = %p, b = %d\n", a,aptr,b);
   return 0;
}
