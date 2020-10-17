/* calculeaza media aritmetica folosind o bucla for

gcc -Wall average_for.c -o average_for

*/

#include <stdio.h>

int main()
{
    int sum, count, N, tmp;
    float avg;
    printf("give me N\n");
    scanf("%i",&N);
    for (count = 1; count <= N; count++) {
        printf("Numarul nr. %i\n", count);
        scanf ("%i",&tmp);
        sum = sum + tmp;
        avg = (float)sum / count;
    }
    printf("media este: %f\n",avg);
    return 0;
}