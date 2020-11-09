include <stdio.h>

int main() {

  float a = 3.12345;
  float b = 7.72213;
  float c = 9.51434;

  printf("suma este : %f\n", (a + b + c) );
  printf("suma este : %i\n", (int)(a + b + c) );
  printf("suma este : %i\n", (int)a + (int)b + (int)c );

  return 0;
}
