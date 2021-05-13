//gcc -Wall impure_nopointer.c -o impure_nopointer

#include <stdio.h>

void smfunc(int a) {
    a = 121;
    printf ("In interior: %d\n", a);
}

int main()
{
    int a = 100;
    printf("Inainte: %d\n", a);
    smfunc(a);
    printf("Dupa: %d\n", a);
}
