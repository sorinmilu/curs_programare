#include <stdio.h>

int main()
{
   int N = 10;
   int a[] = { 0 };
   int b[5] = { 0 };
   int c[] = {};
   int d[5] = {};
   int e[] = { 5, 5, 5, 5, 5 };
   int f[5] = { 5, 5, 5};
   int g[N];

   printf ("a: %ld\n", sizeof(a)/sizeof(a[0]));
   printf ("b: %ld\n", sizeof(b)/sizeof(b[0]));
   printf ("c: %ld\n", sizeof(c)/sizeof(c[0]));
   printf ("d: %ld\n", sizeof(d)/sizeof(d[0]));
   printf ("e: %ld\n", sizeof(e)/sizeof(e[0]));
   printf ("f: %ld\n", sizeof(f)/sizeof(f[0]));
   printf ("g: %ld\n", sizeof(g)/sizeof(g[0]));
   return 0;
}
