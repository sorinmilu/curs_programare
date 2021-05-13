//gcc -Wall pointer_strings2.c -o pointer_strings2

#include <stdio.h>

int main(void) {

  char *sirPtr = "Cine a pus ulei pe clanta";

  printf("%s\n", sirPtr);

  printf("%c\n", *sirPtr);
  sirPtr++;
  printf("%c\n", *sirPtr);
  sirPtr++;
  printf("%c\n", *sirPtr);
  sirPtr++;
  printf("%c\n", *sirPtr);
  sirPtr--;
  printf("%c\n", *sirPtr);
  sirPtr--;
  printf("%c\n", *sirPtr);
  sirPtr--;
  printf("%c\n", *sirPtr);

  return 0;
}