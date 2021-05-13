//gcc -Wall enum_init.c -o enum_init

#include <stdio.h>

enum year{Jan=10, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

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
