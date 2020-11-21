#include <stdio.h>

int putere(int m, int n);
int glb = 121;

int main()
{
   int a=3, b=5;
   printf("main: 1 %i\n", glb);
   int c = putere(a, b);
   printf("main: 2 %i\n", glb);
   glb = 1234;
   printf("main: 3 %i\n", glb);
   printf("%d la puterea %d este %d\n",a,b,c);
   return 0;
}

int putere(int m, int n)
{
   int i, p=1;
   glb = 4321;
   printf("putere: 1 %i\n", glb);
   for (i=1; i<=n; i++) {
       p = p * m;
   }
   return p;
}
