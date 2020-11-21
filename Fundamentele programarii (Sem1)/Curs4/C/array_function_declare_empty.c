#include <stdio.h>


void printint(int st[])
{
   printf ("Lungime in functie : %ld\n", sizeof(st)/sizeof(st[0]));
}

int main()
{
   int c[14] = {};
   printf ("Lungime in main: %ld\n", sizeof(c)/sizeof(c[0]));
   printint(c);
   return 0;
}

