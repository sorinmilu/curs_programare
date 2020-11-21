#include <stdio.h>

int main()
{
   int N;
   printf("introduceti un numar\n");
   scanf("%i",&N);

   if (N >= 10) {
       printf("Numarul este mai mare sau egal cu 10\n");
   } else if (N < 10 && N >= 0) {
       printf("Numarul este mai mic decat 10\n");
   } else {
       printf("Numarul este negativ\n");
   }
   return 0;
}
