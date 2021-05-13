#include <stdio.h>

int main()
{
    int a = 100;
    char d = 'b';
    short m = 21;
    long v = 100;

    int *ptra = &a;
    char *ptrd = &d;
    short *ptrm = &m;
    long *ptrv = &v;


    printf ("adresa a: %p, lungime %zd, valoarea %d\n", ptra, sizeof(a), *ptra);
    printf ("adresa d: %p, lungime %zd, valoarea %c\n", ptrd, sizeof(d), *ptrd);
    printf ("adresa m: %p, lungime %zd, valoarea %d\n", ptrm, sizeof(m), *ptrm);
    printf ("adresa v: %p, lungime %zd, valoarea %ld\n", ptrv, sizeof(v), *ptrv);
}


