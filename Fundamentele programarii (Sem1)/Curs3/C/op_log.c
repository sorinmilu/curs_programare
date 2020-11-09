#include <stdio.h>

int main()
{
int a = 1;
int b = 0;
int c = 12;
int d = 0;

printf ("\n---------------------\n");
printf ("a este: %d\n", a);
printf ("b este: %d\n", b);
printf ("c este: %d\n", c);
printf ("d este: %d\n", d);
printf ("\n---------&&--------------\n");
printf ("a && b este: %i\n", (a && b));
printf ("a && c este: %i\n", (a && c));
printf ("b && d este: %i\n", (b && d));
printf ("\n----------||-------------\n");
printf ("a || b este: %i\n", (a || b));
printf ("a || c este: %i\n", (a || c));
printf ("b || d este: %i\n", (b || d));
printf ("\n------------! &&----------\n");
printf ("! a || b este: %i\n", !(a || b));
printf ("! a || c este: %i\n", !(a || c));
printf ("! b || d este: %i\n", !(b || d));
return 0;
}
