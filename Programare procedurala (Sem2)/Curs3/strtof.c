//gcc -Wall strof.c -o strof

#include <stdio.h>
#include <stdlib.h>

int main () {
   char str[30] = "20.30300 si ceva litere";
   char *ptr;
   double ret;

   ret = strtof(str, &ptr);
   printf("Numarul flotant este %f\n", ret);
   printf("Restul sirului:  %s", ptr);

   return(0);
}
