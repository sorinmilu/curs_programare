//gcc -Wall atoi.c -o atoi

#include <stdio.h>
#include <stdlib.h>

int main () {
  int val, aal;
  char str[20] = "98993489";
  char atr[20] = "astalavista";

  val = atoi(str);
  printf("sirul este: %s, valoarea este: %d\n", str, val);

  aal = atoi(atr);
  printf("sirul este: %s, valoarea este:  %d\n", atr, aal);

  return(0);
}
