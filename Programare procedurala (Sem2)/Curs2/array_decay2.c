//gcc -Wall array_decay2.c -o array_decay2

#include <stdio.h>

void functie(int arr[]) {
    int vsize = sizeof(arr)/sizeof(arr[0]);
    printf("vsize in functie, %d\n", vsize);
}

int main () {
    int n[] = { 5, 20, 29, 32, 63 };

    int vsize = sizeof(n)/sizeof(n[0]);

    printf ("vsize in main: %d\n", vsize );

    functie(n);

}
