//Compilare: gcc -Wall main_func.c -o main_func

#include <stdio.h>

int main() {
   int n = 4, i;
   float num[] = {12.32, 16.21, 10, 18.1};
   float sum = 0.0;
   float avg;

   for (i = 0; i < n; ++i) {
       sum += num[i];
   }

   avg = sum / n;
   printf("Media = %.2f", avg);
   return 0;
}
