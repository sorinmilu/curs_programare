//gcc -Wall scanf4.c -o scanf4

#include <stdio.h>
#include <string.h>

int main()
{
   char cuvant[2];

   printf("cuvant:");
   scanf("%[^\n]s", cuvant);
   printf("%s\n",cuvant);
   return 0;
}
