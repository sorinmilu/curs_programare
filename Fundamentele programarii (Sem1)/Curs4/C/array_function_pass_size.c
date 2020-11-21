#include <stdio.h>

void printint(int st[], int size)
{
  int i;
  printf ("Lungime in functie : %ld\n", sizeof(st)/sizeof(st[0]));
  for (i = 0; i < size; i++ ) {
      printf("nr: \%i este %i\n",i, st[i]);
  }
}

int main()
{
  int c[14] = {1,2,3,4,5,6};
  printint(c,10);
  return 0;
}
