//gcc -Wall strcat1.c -o strcat1

#include <stdio.h>
#include <string.h>

int main() {
   char str1[100] = "If it bleeds, ";
   char str2[] = "we can kill it.";

   strcat(str1, str2);

   printf ("%s\n", str1);

   return 0;
}
