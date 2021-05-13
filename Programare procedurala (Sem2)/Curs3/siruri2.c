//gcc -Wall siruri2.c -o siruri2

#include <stdio.h>
#include <string.h>

int main()
{
  char strb[] = "caracatita";
  int i;

  printf ("sizeof returneaza: %ld\n", sizeof(strb));
  printf ("strlen returneaza: %ld\n", strlen(strb));

  for (i = 0; i < sizeof(strb); i++) {
    printf ("cr: %c numar: %d\n", strb[i], strb[i]);
  }

  return 0;
}
