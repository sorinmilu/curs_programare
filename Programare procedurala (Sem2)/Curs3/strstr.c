//gcc -Wall strstr.c -o strstr

#include <stdio.h>
#include <string.h>


int main () {
   char haystack[26] = "Cine a pus ulei pe clanta";
   char needle[10] = "ulei";
   char *ret;

   ret = strstr(haystack, needle);

   printf("%s\n", ret);

   return(0);
}

