#include <stdio.h>

int main()
{
  int N;
  printf("numar? \n");
  scanf("%i",&N);
  
  if (N > 0)
      printf("> decat zero\n");
  else
      printf("< decat zero\n");
  
  // însă nu putem folosi else după, trebuie neapărat inclus între {}
  // if (N > 0) printf("1 linie");printf("2 linii");
  
   printf("restul ...");
  return 0;
}

