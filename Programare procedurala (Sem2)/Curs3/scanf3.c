//gcc -Wall scanf3.c -o scanf3

#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   printf("introduceti o expresie:");
   scanf("%[^\n]s", str);
   printf("introdus: %s",str);
   return 0;
}
