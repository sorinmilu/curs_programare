/*cel mai mic multiplu comun */

#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Introduceti doua numere intregi pozitive: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2; //--- (conditie ternara cu ? si :)

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("CMMMC al numerelor %d si %d este %d\n", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}

/*
-----output------

Introduceti doua numere intregi pozitive: 5 9
CMMMC al numerelor 5 si 9 este 45

-------------------
*/
