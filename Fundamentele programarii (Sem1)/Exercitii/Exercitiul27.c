/*identificarea unui palindrom */

#include <stdio.h>

int main() {
    int n, reversedN = 0, rem, originalN;
    printf("Introduceti un numar intreg cu mai multe cifre: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
     //-----
     //-----
     //-----
    }

    if (originalN == reversedN)
        printf("%d este palindrom\n", originalN);
    else
        printf("%d nu este palindrom\n", originalN);

    return 0;
}

/*
-----output------

Introduceti un numar intreg cu mai multe cifre: 12321
12321 este palindrom

-------------------
*/