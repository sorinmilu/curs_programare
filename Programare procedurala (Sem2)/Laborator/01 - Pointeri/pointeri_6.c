#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    // Pointer catre arr

    printf("Introduceti dimensiunea sirului, nu mai mult de %d:", MAX_SIZE);
    scanf("%d", &N);

    printf("Introduceti %d elemente ale sirului:\n", N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        // Mutam pointerul catre urmatorul element din sir
        ptr++;
    }

    // Resetam pointerul la inceputul sirului
    ptr = arr;

    printf("Ati introdus: \n");
    for (i = 0; i < N; i++)
    {
        // Afisam valoarea catre care trimite pointerul
        printf("%d, ", *ptr);

        // Mutam pointerul catre urmatorul element
        ptr++;
    }
    return 0;
}

