#include <stdio.h>

int main()
{
    int arr1[101], fr1[101];
    int n, i, j, ctr;

    printf("\n\nAfiseaza frecventa numerelor din matrice:\n");
    printf("------------------------------------------------\n");

    printf("Introduceti numarul de elemente din matrice (nu mai mare de 100):");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
      printf("element - %d : ",i);
      scanf("%d",&arr1[i]);
      fr1[i] = -1;
    }

     //for-----
     //-----
     //for-----
     //if-----
     //-----
     //-----
     //-----
     //-----

     //if-----
     //-----
     //-----
    }

    printf("\nFrecventa numerelor din matrice: \n");
    for(i=0; i<n; i++) {
        if(fr1[i]!=0) {
            printf("%d apare de %d ori\n", arr1[i], fr1[i]);
        }
    }
    return 0;
}


/*
-----output------

Afiseaza frecventa numerelor din matrice:
------------------------------------------------
Introduceti numarul de elemente din matrice (nu mai mare de 100):7
element - 0 : 2
element - 1 : 3
element - 2 : 2
element - 3 : 5
element - 4 : 3
element - 5 : 7
element - 6 : 4

Frecventa numerelor din matrice:
2 apare de 2 ori
3 apare de 2 ori
5 apare de 1 ori
7 apare de 1 ori
4 apare de 1 ori

-------------------
*/