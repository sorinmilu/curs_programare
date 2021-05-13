//gcc -Wall puts_fgets.c -o puts_fgets

#include <stdio.h>
#define MAX 15

int main()
{
   char astr[MAX];
   puts("introduceti un sir:");
   fgets(astr, MAX, stdin);
   printf("string is: %s\n", astr);

   return 0;
}
