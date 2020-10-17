#include <stdio.h>

int multiplicare(int x, int y) {
    printf("Multiplicare: x: %d y: %d\n", x,y);
    int result = 0;
    result = x * y;
    return result;
}

int putere(int m, int n)
{
   int i;
   int p=1;
   for (i=1; i<=n; i++) {
       printf ("i: %d p: %d\n",i,p );
       p = multiplicare(p,m);
       printf ("p dupa: %d\n",p );
   }
   return p;
}

int main(int argc, char *argv[])
{
   int a=3;
   int b=5;
   int c = putere(a, b);
   printf("%d la puterea %d este %d\n",a,b,c);
   return 0;
}
