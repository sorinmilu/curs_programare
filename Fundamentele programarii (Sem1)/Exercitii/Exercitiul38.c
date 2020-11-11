//programul gaseste transpusa unei matrici

#include <stdio.h>

int main()  {
  int arr1[50][50],brr1[50][50],i,j,r,c;

   printf("\n\nTranspusa unei matrici :\n");
   printf("---------------------------\n");

   printf("\nIntroduceti numarul de randuri si coloane ale matricii (doua numere intregi): ");
   scanf("%d %d",&r,&c);

   for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
           printf("element - [%d],[%d] : ",i,j);
           scanf("%d",&arr1[i][j]);
        }
    }

     //for-----
     //for-----
     //-----
     //-----
     //-----

    printf("\nMatricea este :\n");
     //for-----
     //-----
     //for-----
     //-----
     //-----
     //-----

    printf("\n\nTranspusa este: ");
     //for-----
     //-----
     //for-----
     //-----
     //-----
     //-----
    return 0;
}

/*
-----output------

Transpusa unei matrici :
---------------------------

Introduceti numarul de randuri si coloane ale matricii (doua numere intregi): 3 4
element - [0],[0] : 2
element - [0],[1] : 2
element - [0],[2] : 2
element - [0],[3] : 2
element - [1],[0] : 3
element - [1],[1] : 3
element - [1],[2] : 3
element - [1],[3] : 3
element - [2],[0] : 4
element - [2],[1] : 4
element - [2],[2] : 4
element - [2],[3] : 4

Matricea este :

2       2       2       2
3       3       3       3
4       4       4       4

Transpusa este:
2       3       4
2       3       4
2       3       4
2       3       4

-------------------
*/