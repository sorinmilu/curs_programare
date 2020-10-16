/* se compileaza cu
    gcc -Wall -o average-while average-while.c
*/

#include <stdio.h>

int main()
{
   int sum=0, count=1, N=0, tmp=0;
   float avg = 0;
   printf("give me N\n");
   scanf("%i",&N);
   while (count < N+1) {
       printf("Numarul nr. %i\n", count);
       scanf ("%i",&tmp);
       sum = sum + tmp;
       avg = (float)sum / count;
       count = count+1;
   }

   printf("media este: %f\n",avg);
   return 0;
}
