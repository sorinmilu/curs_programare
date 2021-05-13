//gcc -Wall indirection.c -o indirection

#include <stdio.h>

int main()
{
    int a = 23;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;

    printf ("-----Adrese-----\n");
    printf ("adresa a: %p\n", &a);
    printf ("adresa p: %p\n", &p);
    printf ("adresa pp: %p\n", &pp);
    printf ("adresa ppp: %p\n", &ppp);

    printf ("-----Valori-----\n");
    printf ("valoare a: %d\n", a);
    printf ("valoare p: %p\n", p);
    printf ("valoare pp: %p\n", pp);
    printf ("valoare ppp: %p\n", ppp);


    printf ("-----Dereferentiere-----\n");
    printf ("a: %d\n", a);
    printf ("*p: %d\n", *p);
    printf ("**pp: %d\n", **pp);
    printf ("***ppp: %d\n", ***ppp);
}