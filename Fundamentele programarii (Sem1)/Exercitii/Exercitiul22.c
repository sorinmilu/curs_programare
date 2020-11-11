/*rezolvarea ecuatiei de gradul 2 */

#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, discriminant, rad1, rad2, real, imag;
    printf("Introduceti coeficientii a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // conditie pentru radacini reale sau diferite
    if (discriminant > 0) {
     //-----
     //-----
     //----
    }

    // conditie pentru radacini reale sau egale
    else if (discriminant == 0) {
     //-----
     //-----
    }

    // daca radacinile nu sunt reale
    else {
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("rad1 = %.2lf+%.2lfi si rad2 = %.2f-%.2fi\n", real, imag, real, imag);
    }

    return 0;
}


/*
-----output------

Introduceti coeficientii a, b and c: 2 5 -3
rad1 = 0.50 si rad2 = -3.00

-------------------
*/