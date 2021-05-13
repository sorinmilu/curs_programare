//gcc -Wall siruri5.c -o siruri5

#include <stdio.h>
#include <string.h>

int main()
{

  char stra[] = {'c', 'a', 'r','a','c','a','t','i','t','a', '\0'};
  stra[0] = 'n';
  stra[1] = 'a';
  stra[2] = 'u';
  stra[3] = 't';
  stra[4] = 'i';
  stra[5] = 'l';
  stra[6] = 'u';
  stra[7] = 's';

  printf ("stra este: %s\n", stra);

  return 0;
}
