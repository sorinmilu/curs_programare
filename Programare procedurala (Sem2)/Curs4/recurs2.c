//gcc -Wall recurs2.c -o recurs2

#include <stdio.h>
long int fact(int n);

int main()
{
   int n = 4;
   long int res = fact(n);
   printf("Factorial al lui %d = %ld\n", n, res);
   return 0;
}
long int fact(int nm)
{
   int r, tmp;
   printf ("intrare: %d\n",nm);
   if (nm >= 1) {
       tmp = fact(nm-1);
       r= nm*tmp;
       printf ("iesire: %d\n", r);
       return r;
       }
   else {
       printf ("else: iesire: 1\n");
       return 1;
       }
}
