/*converteste un numar binar la versiunea zecimala */

#include <math.h>
#include <stdio.h>
int convert(long long n);
int main() {
    long long n;
    printf("Introduceti un numar binar (succesiune de 0 si 1): ");
    scanf("%lld", &n);
    printf("%lld binar = %d zecimal\n", n, convert(n));
    return 0;
}

int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
     //-----
     //-----
     //-----foloseste functia pow
     //-----
    }
    return dec;
}



/*
-----output------

Introduceti un numar binar (succesiune de 0 si 1): 11010101
11010101 binar = 213 zecimal

-------------------
*/

