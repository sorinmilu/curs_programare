//gcc -Wall strtok2.c -o strtok2

#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "Cine a pus ulei pe clanta";
   const char s[2] = " ";
   const char a[2] = "a";
   char *token;

   token = strtok(str, s);
   printf( "%s\n", token );

   while( token != NULL ) {
      token = strtok(NULL, s);
      if (token != NULL) {
        printf( "%s\n", token );
      }
   }

   return(0);
}