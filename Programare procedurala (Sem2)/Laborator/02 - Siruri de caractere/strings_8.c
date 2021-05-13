
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i, len;
    int freq[26];

    /* Input string from user */
    printf("Introduceti un sir de maximum %d caractere: ", MAX_SIZE);
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    /* Initializeaza frecventele tuturor caracterelor */
    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }


    for(i=0; i<len; i++)
    {
        /* Daca este minuscul */
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }

    /* Printeaza frecventa */
    printf("\nFrecventa caracterelor: \n");
    for(i=0; i<26; i++)
    {
        /* Daca exista caracterul */
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}

