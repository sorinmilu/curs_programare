#include <stdio.h>

int main()
{

int a = 100;
char d = 'b';
short m = 21;
long v = 100;

printf ("adresa a: %p, lungime %zd, valoarea %d\n", &a, sizeof(a), a);
printf ("adresa d: %p, lungime %zd, valoarea %c\n", &d, sizeof(d), d);
printf ("adresa m: %p, lungime %zd, valoarea %d\n", &m, sizeof(m), m);
printf ("adresa v: %p, lungime %zd, valoarea %ld\n", &v, sizeof(v), v);

}
