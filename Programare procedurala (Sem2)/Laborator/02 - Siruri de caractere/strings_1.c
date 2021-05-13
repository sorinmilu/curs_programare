#include <stdio.h>
#include <string.h>

int main ()
{

  char stra[] = "ala bala portocala";
  char strb[] = "eenie meenie miney mo";

  printf ("strlen stra este: %ld\n", strlen (stra));
  printf ("sizeof stra este: %ld\n", sizeof (stra)/sizeof(stra[0]));

  printf ("strlen strb este: %ld\n", strlen (strb));
  printf ("sizeof strb este: %ld\n", sizeof (strb)/sizeof(strb[0]));

  return 0;
}

