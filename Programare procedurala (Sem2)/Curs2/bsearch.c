//gcc -Wall bsearch.c -o bsearch

#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
    int numere[] = { 5, 20, 29, 32, 63, 68, 97, 121, 145, 212 };
    int key = 32;
    int vsize = sizeof(numere)/sizeof(numere[0]);

    int *f = (int*) bsearch(&key, numere, vsize, sizeof(numere[0]), cmpfunc);

    if( f != NULL ) {
           printf("Am gasit = %d\n", *f);
    } else {
           printf("Nu am gasit %d \n", key);
    }
    return(0);
}
