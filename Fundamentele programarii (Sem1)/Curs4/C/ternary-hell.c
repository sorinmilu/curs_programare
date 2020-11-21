#include<stdio.h>

int main()
{
  int a = 23;
   int b = 44;
   int c = 99;
   int max1 = a>b ? a>c?a:c : b>c?b:c;
   int max = 0;
   if (a > b) {
       if (a > c) {
           max = a;
       } else {
           max = c;
       }
   } else {
       if (b > c) {
           max = b;
       } else {
           max = c;
       }
   }
   printf ("Max 1: %i\n", max1);
   printf ("Max 2: %i\n", max);
   return 0;
}
