//gcc -Wall siruri3.c -o siruri3

#include <stdio.h>
#include <string.h>

int main()
{

  char stra[] = {'c', 'a', 'r','a','c','a','t','i','t','a'};
  char strb[] = "caracatita";
  char strc[] = {'c', 'a', 'r','a','c','a','t','i','t','a','\0'};

  printf ("stra: %ld\n", sizeof(stra)/sizeof(stra[0]));
  printf ("strb: %ld\n", sizeof(strb)/sizeof(strb[0]));
  printf ("strc: %ld\n", sizeof(strc)/sizeof(strc[0]));
  printf ("strlen stra: %ld\n", strlen(stra));
  printf ("strlen strb: %ld\n", strlen(strb));
  printf ("strlen strc: %ld\n", strlen(strc));

  return 0;
}
