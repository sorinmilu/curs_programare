#include <stdio.h>

//gcc -Wall xor_switch_print.c -o xor_switch_print


void printBinExChar(char c);

void printBinChar(char c);

int main()
{
    char a = 23;
    printBinExChar(a);
    return 0;
}

void printBinExChar(char n)
{
    printBinChar(n);
    int k;
    int i = 8;
    for (k = i - 1; k >= 0; k--) {
        printf ("k este: %d\n", k);
        printBinChar(n >> k);
        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

void printBinChar(char n)
{
    int k;
    int i = 8;
    for (k = i - 1; k >= 0; k--) {
        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}