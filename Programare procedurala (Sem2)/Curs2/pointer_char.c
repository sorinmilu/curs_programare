//gcc -Wall pointer_char.c -o pointer_char

#include <stdio.h>

int main()
{
char a = 100;
char b = 11;
char c = 121;

char *ap = &a;
char *bp = &b;
char *cp = &c;

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
