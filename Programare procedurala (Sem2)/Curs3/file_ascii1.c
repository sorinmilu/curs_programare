//gcc -Wall file_ascii1.c -o file_ascii1

#include <stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("test.txt", "w");
  fprintf(fp, "Testing...\n");
  fclose(fp);
  return 0;
}
