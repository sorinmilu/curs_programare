#include <stdio.h>

int main()
{
   int a, b;
   a = 10;
   b = a++;
   printf("Postincrement\n");
   printf ("a este: %i\n",a);
   printf ("b este: %i\n",b);
   a = 10;
   b = ++a;
   printf("Preincrement\n");
   printf ("a este: %i\n",a);
   printf ("b este: %i\n",b);
   a = 10;
   b = a--;
   printf("Postdecrement\n");
   printf ("a este: %i\n",a);
   printf ("b este: %i\n",b);
   a = 10;
   b = --a;
   printf("Predecrement\n");
   printf ("a este: %i\n",a);
   printf ("b este: %i\n",b);
   return 0;
}
