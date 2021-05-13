/* Afisarea tipului char ca intreg si caracter

gcc -Wall char_ex.c -o char_ex

*/

#include <stdio.h>

int main()
{
    char v = 89;
    char f = 'a';
    printf("v intreg: %i\n", v);
    printf("v caracter: %c\n", v);
    printf("f intreg: %i\n", f);
    printf("f caracter: %c\n", f);

    return 0;
}
