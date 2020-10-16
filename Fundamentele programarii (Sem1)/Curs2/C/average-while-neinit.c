/* se compileaza cu
    gcc -Wall -o average-while average-while.c
    In acest progrma s-a omis initializarea variabilei sum.
    C a alocat spatiu in memorie pentru aceasta variabila dar nu a
    inlocuit continutul acelui spatiu cu 0.
    Calculul final va fi pur aleator pentru ca se va porni de la o suma gresita
    care reprezinta conversia la int a datelor care se gaseau in acel spatiu
*/



#include <stdio.h>

int main()
{
   int sum, count=1, N=0, tmp=0;
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
