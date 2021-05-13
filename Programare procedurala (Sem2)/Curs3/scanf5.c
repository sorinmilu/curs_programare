//gcc -Wall scanf5.c -o scanf5

#include <stdio.h>
#include <string.h>

int main()
{
   char cuvant[2];
   char str[10];
   printf("cuvant:");
   scanf("%[^\n]s", cuvant);
   printf("%s\n",cuvant);
   return 0;
}
