#include <stdio.h>

int main()
{
   int N;
   printf("numar ?\n");
   scanf("%i",&N);

   if (N > 0) {
       printf("> decat zero\n");
   } else {
       printf("< decat zero\n");
   }

   return 0;
}
