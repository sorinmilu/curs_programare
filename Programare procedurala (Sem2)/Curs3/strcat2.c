//gcc -Wall strcat2.c -o strcat2

#include <stdio.h>
#include <string.h>

int main() {
   char str1[100] = "If it bleeds, ";
   char str2[] = "we can kill it.";

   char * str3;
   str3 = strcat(str1, str2);

   printf ("%s\n", str3);

   printf ("%p\n", str1);
   printf ("%p\n", str3);

   return 0;
}