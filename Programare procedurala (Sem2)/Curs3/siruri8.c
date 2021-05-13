//gcc -Wall siruri8.c -o siruri8

#include <stdio.h>
#include <string.h>

int main()
{

  char stra[] = "caracatita";
  char strb[] = "nautilus";

  printf ("strlen stra este: %ld\n", strlen(stra));
  printf ("sizeof stra este: %ld\n", sizeof(stra));

  strcpy(stra, strb);
  printf ("stra este: %s\n", stra);
  printf ("strlen stra este: %ld\n", strlen(stra));
  printf ("sizeof stra este: %ld\n", sizeof(stra));
  printf ("stra[8] este: %c\n", stra[8]);
  printf ("stra[9] este: %c\n", stra[9]);
  return 0;
}
