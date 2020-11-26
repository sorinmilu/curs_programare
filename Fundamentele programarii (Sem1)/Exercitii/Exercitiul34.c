//piramida centrala

#include <stdio.h>

int main () {
  int n;
  int i;
  int v[50];
  int j;
  int k;

  printf("Da-mi nr. de randuri\n");

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
      v[i] = 2 * i;
  }

  for (i = 1; i <= n; i++) {

     //-----

      printf("\n");
    }
    return 0;
}

/*
-----output------

Da-mi nr. de randuri
5
    **
   ****
  ******
 ********
**********

-------------------
*/


