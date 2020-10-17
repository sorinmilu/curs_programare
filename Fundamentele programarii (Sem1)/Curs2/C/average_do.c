/* calculeaza media aritmetica folosind o bucla do

gcc -Wall average_do.c -o average_do

*/

#include <stdio.h>

int main()
{
    int sum, N, tmp;
    int count = 1;
    float avg;
    printf("give me N\n");
    scanf("%i",&N);
    do {
        printf("Numarul nr. %i\n", count);
        scanf ("%i",&tmp);
        sum = sum + tmp;
        avg = (float)sum / count;
        count = count+1;
    } while (count <= N);
    printf("media este: %f\n",avg);
    return 0;
}

