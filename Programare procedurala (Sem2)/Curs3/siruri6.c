//gcc -Wall siruri6.c -o siruri6

#include <stdio.h>
#include <string.h>

int main()
{
  char stra[] = {'c', 'a', 'r','a','c','a','t','i','t','a'};
  stra[0] = "n";
  stra[1] = "a";
  stra[2] = 'u'; stra[3] = 't'; stra[4] = 'i';
  stra[5] = 'l';stra[6] = 'u';stra[7] = 's';

  printf ("stra[0] este: %d\n", stra[0]);
  printf ("stra[1] este: %d\n", stra[1]);
  printf ("stra[2] este: %d\n", stra[2]);
  printf ("stra este: %s\n", stra);
  return 0;
}
