#include <stdio.h>

int putere(int m, int n);
int glb = 121;

int main()
{
   int a=3, b=5;
   int c = putere(a, b);
   printf("in functia main: %i\n", glb);
   printf("%d la puterea %d este %d\n",a,b,c);
   return 0;
}

int putere(int m, int n)
{
   int i, p=1;
   printf("in functia putere: %i\n", glb);
   for (i=1; i<=n; i++) {
       p = p * m;
   }
   return p;
}
