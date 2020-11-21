#include <stdio.h>

int main()
{
   int N = 5;
   int val[N];
   int i = 0;
   int sum = 0;
   float avg;
   for ( i = 0; i < N; i++ ) {
     printf("Introduceti al %i-lea numar: ",i);
     scanf("%d", &val[i]);
   }

   for ( i = 0; i < N; i++ ) {
       printf("Al %i-lea numar este: %i\n",i, val[i]);
       sum = sum + val[i];
   }

   avg = (float)sum/N;
   printf("Media este: %f, Suma este %i\n", avg, sum);

   return 0;
}
