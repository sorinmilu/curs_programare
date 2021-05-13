//gcc -Wall siruri11.c -o siruri11

#include <stdio.h>
#include <string.h>

int main()
{

  char stra[] = "caracatita";
  char strb[] = "nautilus nu este octopod";
  char strc[] = "ambele sunt cefalopode";

  printf ("strlen stra este: %ld\n", strlen(stra));
  printf ("sizeof stra este: %ld\n", sizeof(stra));

  strncpy(stra, strb, 16);
  printf ("stra este: %s\n", stra);
  printf ("strc este: %s\n", strc);
  printf ("strlen stra este: %ld\n", strlen(stra));
  printf ("sizeof stra este: %ld\n", sizeof(stra));

  return 0;
}
