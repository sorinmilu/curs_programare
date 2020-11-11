#include <stdio.h>

int main()
{
    int num;

    printf("Introduceti un numar: \n");
    scanf("%d", &num);
     //if-----
        printf("%d este pozitiv \n", num);
     //else if-----
        printf("%d este negativ \n", num);
     //else-----
        printf("0 e indecis");
     //-----
    return 0;
}

/*
-----output------

Introduceti un numar:
5
5 este pozitiv

Introduceti un numar:
-4
-4 este negativ

-------------------
*/
