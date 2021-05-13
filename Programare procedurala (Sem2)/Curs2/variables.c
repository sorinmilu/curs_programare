//gcc -Wall variables.c -o variables

#include <stdio.h>

int main() {
    int a = 100;
    printf ("adresa a: %p, lungime %ld\n", &a, sizeof(a));
    char d = 'b';
    printf ("adresa d: %p, lungime %ld\n", &d, sizeof(d));
    short m = 21;
    printf ("adresa m: %p, lungime %ld\n", &m, sizeof(m));
    long v = 100;
    printf ("adresa v: %p, lungime %ld\n", &v, sizeof(v));
}
