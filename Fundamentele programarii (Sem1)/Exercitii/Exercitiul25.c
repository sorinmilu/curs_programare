/*cel mai mic multiplu comun si cel mai mare divizor comun */

#include <stdio.h>

int main() {
    int n1, n2, i, gcd, lcm;
    printf("Introduceti doua numere intregi pozitive: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
     //if-----
            gcd = i;
     //-----
    }

    lcm = (n1 * n2) / gcd;

     //-----
     //-----
    return 0;
}

/*
-----output------

Introduceti doua numere intregi pozitive: 5 9
CMMMC al 5 and 9 is 45
CMMDC al 5 and 9 is 1

-------------------
*/