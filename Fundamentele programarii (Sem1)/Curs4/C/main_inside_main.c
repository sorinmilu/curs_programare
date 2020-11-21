#include <stdio.h>
int putere(int m, int n)
{
   int i, main=1;
   for (i=1; i<=n; i++) {
       main = main * m;
   }
   return main;
}

int main()
{
   int main = 3;
   printf("%d\n", main);
   printf("Putere: %d\n", putere(main, 5));
   return 0;
}
