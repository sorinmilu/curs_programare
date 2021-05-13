//gcc -Wall swap.c -o swap

#include <stdio.h>

void swap(int *v1,int *v2)
{
    int t;
     t   = *v1;
    *v1   = *v2;
    *v2   =  t;
}
int main()
{
    int a = 100, b=121;

    printf("Inainte: a = %d, b= %d\n", a,b);
    swap(&a, &b);
    printf("Dupa: a = %d, b= %d\n", a,b);
}
