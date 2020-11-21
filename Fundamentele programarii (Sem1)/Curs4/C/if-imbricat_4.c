#include <stdio.h>

int main()
{
  int N = 13;
  int a = 2;
  if (N >= 10) {
      a = 100;
      int b = 12;
      printf("N >= cu 10\n");
  } else if (N < 10 && N >= 0) {
      printf("N <= 10\n");
  } else {
      printf("N negativ\n");
  }
   printf("a dupa if %d\n", a);

  return 0;
}
