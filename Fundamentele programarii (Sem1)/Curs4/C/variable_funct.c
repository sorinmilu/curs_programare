#include <stdio.h>

int putere(int m, int n);

int main()
{
  int a=3, b=5;
  printf("inainte de apel: a=%d, b=%d\n", a,b);
  int c = putere(a, b);
  printf("%d la puterea %d este %d\n",a,b,c);
  printf("dupa apel: a=%d, b=%d\n", a,b);
  return 0;
}

int putere(int m, int n)
{
  int i, p=1;
  int a = 12;
  int b = 21;
  printf("In functie: a=%d, b=%d\n", a,b);
  for (i=1; i<=n; i++) {
      p = p * m;
  }
  return p;
}
