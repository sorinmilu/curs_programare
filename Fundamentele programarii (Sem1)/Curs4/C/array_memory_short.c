#include <stdio.h>

int main()
{
   int N = 10;
   short val[N];
   int i = 0;
   for ( i = 0; i < N; i++ ) {
     printf("Adresa %i: %p\n",i, &val[i]);
   }
   return 0;
}
