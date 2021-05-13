//gcc -Wall enum_1.c -o enum_1

#include <stdio.h>

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
  int i;
  enum year ch;
  ch = May;
  for (i=Jan; i<=Dec; i++) {
     printf("%d ", i);
  }
  printf ("\nch este: %d\n",ch);
  return 0;
}

