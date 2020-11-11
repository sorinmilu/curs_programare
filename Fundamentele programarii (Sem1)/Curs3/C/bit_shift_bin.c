#include <stdio.h>

//gcc -Wall bit_shift_bin.c -o bit_shift_bin

void printBinChar(char c);

int main()
{
    char a = 23;
    printBinChar(a);
    return 0;
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




