//gcc -Wall pointer_short.c -o pointer_short

#include <stdio.h>

int main()
{
short a = 100;
short b = 11;
short c = 121;

short *ap = &a;
short *bp = &b;
short *cp = &c;

printf ("adresa a: %p\n", &a);
printf ("adresa b: %p\n", &b);
printf ("adresa c: %p\n", &c);
printf("------------\n");

printf ("valoarea este: %d\n",*ap);
printf ("valoarea este: %d\n",*bp);
printf ("valoarea este: %d\n",*cp);
printf("------------\n");
ap++;
printf ("valoarea este: %d\n",*ap);
ap++;
printf ("valoarea este: %d\n",*ap);
}
