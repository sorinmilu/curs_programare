//gcc -Wall pointer_int.c -o pointer_int

#include <stdio.h>

int main()
{
int a = 100;
int b = 11;
int c = 121;

int *ap = &a;
int *bp = &b;
int *cp = &c;

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
