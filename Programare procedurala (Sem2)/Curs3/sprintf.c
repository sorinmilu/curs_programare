//gcc -Wall sprintf.c -o sprintf

#include <stdio.h>
#include <math.h>

int main () {
   char str[80];

   sprintf(str, "%f", M_PI);
   printf("Valoarea lui pi este: %s", str);

   return(0);
}