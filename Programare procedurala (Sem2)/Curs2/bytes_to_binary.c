//gcc -Wall bytes_to_binary.c -o bytes_to_binary

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';
    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }
    return b;
}

int main()
{
  int a = 2027433617;
  printf ("a este: %i\n", a);
  printf ("adresa a: %p, lungime %d\n", &a, sizeof(a));
  char *p = &a;
  //stack-ul e ordonat invers
  char fb = p[3];
  char sb = p[2];
  char tb = p[1];
  char frb = p[0];
  printf("%s\n", byte_to_binary(fb));
  printf("%s\n", byte_to_binary(sb));
  printf("%s\n", byte_to_binary(tb));
  printf("%s\n", byte_to_binary(frb));
}
