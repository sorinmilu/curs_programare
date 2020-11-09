#include <stdio.h>

int main()
{
int a = 10;
int b = 26;

printf ("\n--------Numere întregi---------------\n");
printf ("a este: %d\n", a);
printf ("b este: %d\n", b);
printf ("-----------------------\n\n");
printf ("a + b este: %i\n", a + b);
printf ("a - b este: %i\n", a - b);
printf ("a * b este: %i\n", a * b);
printf ("b / a este: %i\n", b / a);
printf ("b %% a este: %i\n", b % a);
a++;
printf ("a++ este: %i\n", a);
a = 10; /*readucem a la valoarea initiala */
A--;
printf ("a-- este: %i\n", a);
return 0;
}
