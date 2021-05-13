//gcc -Wall strchr.c -o strchr

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "Cine a pus ulei pe clanta";
   const char caut = 'u';
   char *p;
   p = strchr(str, caut);
   printf("%s", p);
   return 0;
}

