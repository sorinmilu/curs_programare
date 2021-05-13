//gcc -Wall siruri7.c -o siruri7

#include <stdio.h>
#include <string.h>

int main () {
  char str1[20];
  char str2[20];

  strcpy(str1, "caracatita");
  strcpy(str2, "nautilus");

  printf ("str1 este: %s\n", str1);
  printf ("str2 este: %s\n", str2);

  return 0;
}
