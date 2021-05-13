//gcc -Wall impure_pointer.c -o impure_pointer

#include <stdio.h>

void smfunc(int * a) {
    *a = 121;
    printf ("In interior: %d\n", *a);
}

int main()
{
    int a = 100;
    printf("Inainte: %d\n", a);
    smfunc(&a);
    printf("Dupa: %d\n", a);
}
