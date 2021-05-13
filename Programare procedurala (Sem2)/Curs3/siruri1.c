//gcc -Wall siruri1.c -o siruri1

#include <stdio.h>

int main()
{
  char stra[] = {'c', 'a', 'r', 'a', 'c', 'a', 't', 'i', 't', 'a'};
  char strb[] = "caracatita";

  printf ("stra: %ld\n", sizeof(stra)/sizeof(stra[0]));
  printf ("strb: %ld\n", sizeof(strb)/sizeof(strb[0]));
  return 0;
}
