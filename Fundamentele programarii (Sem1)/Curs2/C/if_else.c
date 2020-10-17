/* decide daca numarul e mai mare sau mai mic decat zero

gcc -Wall if_else.c -o if_else

*/

#include <stdio.h>

int main()
{
    int N;
    printf("give me a Number\n");
    scanf("%i",&N);
    if (N > 0) {
        printf("Numarul e mai mare decat zero\n");
    } else {
        printf("Numarul e mai mic decat zero\n");
    }
    return 0;
}
