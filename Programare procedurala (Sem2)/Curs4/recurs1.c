//gcc -Wall recurs1.c -o recurs1

#include <stdio.h>

long int fact(int n);

int main()
{
   int n = 4;
   printf("Factorial al lui %d = %ld\n", n, fact(n));
   return 0;
}

long int fact(int nm)
{
   if (nm >= 1) {
       return nm*fact(nm-1);
   }
   return 1;
}