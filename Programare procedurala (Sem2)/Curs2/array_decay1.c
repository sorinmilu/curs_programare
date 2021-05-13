//gcc -Wall array_decay1.c -o array_decay1

#include <stdio.h>

int main () {
   int n[] = { 5, 20, 29, 32, 63};

   int vsize = sizeof(n)/sizeof(n[0]);

   printf ("vsize: %d\n", vsize );
}
