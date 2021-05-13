//gcc -Wall scanf2.c -o scanf2

#include <stdio.h>
#include <string.h>

int main()
{
   char str[100];
   printf("introduceti o expresie:");
   scanf("%s", str);
   printf("introdus: %s",str);
   return 0;
}
