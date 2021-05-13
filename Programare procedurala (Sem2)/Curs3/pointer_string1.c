//gcc -Wall pointer_strings1.c -o pointer_strings1

#include <stdio.h>

int main(void) {

  char *sirPtr = "Cine a pus ulei pe clanta";

  printf("%s\n", sirPtr);

  sirPtr++;
  printf("%s\n", sirPtr);
  sirPtr++;
  printf("%s\n", sirPtr);
  sirPtr++;
  printf("%s\n", sirPtr);
  sirPtr--;
  printf("%s\n", sirPtr);
  sirPtr--;
  printf("%s\n", sirPtr);
  sirPtr--;
  printf("%s\n", sirPtr);

  return 0;
}