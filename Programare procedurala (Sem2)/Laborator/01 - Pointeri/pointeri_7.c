#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size


/* Function declaration to print array */
void printstr(int *arr, int size);


int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int *source_ptr = source_arr;   // Pointer catre sirul sursa
    int *dest_ptr   = dest_arr;     // Pointer catre sirul destinatie

    int *end_ptr;


    printf("Introduceti dimensiunea sirului, nu mai mult de %d: ", MAX_SIZE);
    scanf("%d", &size);
    printf("introduceti elementele sirului: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }


    // Pointer catre ultimul element al sirului
    end_ptr = &source_arr[size - 1];


    /* Print source and destination array before copying */
    printf("Sirul inainte de copiere: \n");
    printstr(source_arr, size);

    printf("Sirul destinatie inainte de copiere: \n");
    printstr(dest_arr, size);


    while(source_ptr <= end_ptr)
    {
        //copiem elementul din sursa in destinatie
        *dest_ptr = *source_ptr;

        // Incrementam cei doi pointeri
        source_ptr++;
        dest_ptr++;
    }


    /* Print source and destination array after copying */
    printf("Sirul sursa: \n");
    printstr(source_arr, size);

    printf("Sirul destinatie: \n");
    printstr(dest_arr, size);


    return 0;
}

void printstr(int *data, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
          printf("%d\n", *(data + i));
    }
}

