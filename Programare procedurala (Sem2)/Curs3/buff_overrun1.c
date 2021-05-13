//gcc -Wall buff_overrun1.c -o buff_overrun1

#include <stdio.h>
#include <string.h>

int main()
{
   char cuvant[2];

   printf("cuvânt:");
   scanf("%[^\n]s", cuvant);
   printf("%s\n",cuvant);
   return 0;
}
