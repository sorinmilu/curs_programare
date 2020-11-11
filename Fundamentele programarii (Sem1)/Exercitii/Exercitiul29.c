/* verifica daca un numar intreg este suma a doua numere prime */

#include <stdio.h>

int checkPrime(int n);

int main() {
    int n, i, flag = 0;
    printf("Introduceti un numar intreg pozitiv: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d nu poate fi exprimat ca suma a doua numere prime]\n", n);
    return 0;
}

// function to check prime number
int checkPrime(int n) {
    int i, isPrime = 1;
     //for-----
     //if-----
     //-----
     //-----
     //-----
     //-----
    return isPrime;
}


/*
-----output------

Introduceti un numar intreg pozitiv: 33
33 = 2 + 31

-------------------
*/