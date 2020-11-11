#include <stdio.h>

gcc -Wall xor_switch_print.c -o xor_switch_print


void printBinChar(char c);

int main()
{
   char a = 13;
   char b = 28;
   printf ("inainte: a: %d, b: %d\n", a,b);

   printf("a binar: ");
   printBinChar(a);
   printf("\n");
   printf("b binar: ");
   printBinChar(b);
   printf("\n");

   a = a ^ b;

   printf("Dupa prima substitutie: \n");
   printf("a binar: ");
   printBinChar(a);
   printf("b binar: ");
   printBinChar(b);

   b = b ^ a;

   printf("Dupa a doua substitutie: \n");
   printf("a binar: ");
   printBinChar(a);
   printf("b binar: ");
   printBinChar(b);

   a = a ^ b;

   printf("Dupa a treia substitutie: \n");
   printf("a binar: ");
   printBinChar(a);
   printf("b binar: ");
   printBinChar(b);

   printf ("dupa: a: %d, b: %d\n", a,b);

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
