/* decide daca numarul e mai mare, mai mic sau egal cu decat zero

gcc -Wall if_else_zero.c -o if_else_zero

*/


#include <stdio.h>

int main()
{
    int N;
    printf("give me a Number\n");
    scanf("%i",&N);

    if (N > 0) {
        printf("Numarul e mai mare decat zero\n");
    } else if (N == 0) {
        printf("Numarul e zero\n");
    } else {
        printf("Numarul e mai mic decat zero\n");
    }
    return 0;
}
