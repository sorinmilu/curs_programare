#include <stdio.h>

int main() {
    int n, i;
    printf("Introduceti un numar intreg <= 10: ");
    scanf("%d", &n);
     //if-----
        printf("%d este mai mare decat 10\n", n);
     //else-----
        for (i = 1; i <= 10; ++i) {
     //printf-----
        }
    }
    return 0;
}

/*
-----output------

Introduceti un numar intreg <= 10: 8
8 * 1 = 8
8 * 2 = 16
8 * 3 = 24
8 * 4 = 32
8 * 5 = 40
8 * 6 = 48
8 * 7 = 56
8 * 8 = 64
8 * 9 = 72
8 * 10 = 80

-------------------
*/