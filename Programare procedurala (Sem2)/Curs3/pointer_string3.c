//gcc -Wall pointer_strings3.c -o pointer_strings3

#include <stdio.h>

int main(void) {


  char *sirPtr = "Cine a pus ulei pe clanta";

  printf("%s\n", sirPtr);
  printf("%s\n", sirPtr+1);
  printf("%s\n", sirPtr+7);

  printf("%c\n", *sirPtr);
  printf("%c\n", *(sirPtr+1));
  printf("%c\n", *(sirPtr+7));
  return 0;
}

