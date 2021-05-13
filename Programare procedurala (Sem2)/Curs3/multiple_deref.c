//gcc -Wall multiple_deref.c -o multiple_deref

#include <stdio.h>

int main(int argc, char **argv) {
  char *cuvinte[3];
  char *pc;
  char **ppc;

  cuvinte[0] = "zero";
  cuvinte[1] = "one";
  cuvinte[2] = "two";

  ppc = cuvinte;
  for (int i = 0; i < 3; i++) {
     ppc = cuvinte + i;
     pc = *ppc;
     while (*pc != 0) {
        printf("%c ", *pc);
        pc = pc + 1;
     }
     printf("\n");
  }
  return 0;
}
