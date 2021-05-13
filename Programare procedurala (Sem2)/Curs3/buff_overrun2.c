//gcc -Wall buff_overrun2.c -o buff_overrun2

#include <stdio.h>
#include <string.h>

int main()
{
   char cuvant[2];
   char str[10];
   printf("cuvânt:");
   scanf("%[^\n]s", cuvant);
   printf("%s\n",cuvant);
   return 0;
}
