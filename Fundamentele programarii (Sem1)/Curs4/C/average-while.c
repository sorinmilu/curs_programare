#include <stdio.h>

int main() {
   int sum = 0;
   int tmp = 0;
   int cnt = 0;
   float avg;

   while (tmp != -99) {
      printf("suma este: %f\n",avg);
      printf("media este: %f\n",avg);
      printf("Numarul nr. %i\n", cnt);
      scanf ("%i",&tmp);
      cnt = cnt + 1;
      sum = sum + tmp;
      avg = (float)sum / cnt;
   }
   return 0;
}
