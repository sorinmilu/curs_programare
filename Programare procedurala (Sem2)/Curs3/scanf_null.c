//gcc -Wall scanf_null.c -o scanf_null

#include <stdio.h>
#include <string.h>

int main()
{
  char *strp;
  scanf("%s", strp);
  printf ("strp este: %s\n", strp);
  return 0;
}
