include <stdio.h>

int main()
{
float a = 10.12;
float b = 26.32;

printf ("\n--------Numere flotante-------------\n");
printf ("a este: %f\n", a);
printf ("b este: %f\n", b);
printf ("-----------------------\n\n");

printf ("a + b este: %f\n", a + b);
printf ("b - a este: %f\n", b - a);
printf ("a * b este: %f\n", a * b);
printf ("b / a este: %f\n", b / a);
a++;
printf ("a++ este: %f\n", a);
a=10.12; /* readucem a la valoarea initiala */
a--;
printf ("a-- este: %f\n", a);
return 0;
}
