//gcc -Wall strtok1.c -o strtok1

#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "Cine a pus ulei pe clanta";
   const char s[2] = " ";
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
