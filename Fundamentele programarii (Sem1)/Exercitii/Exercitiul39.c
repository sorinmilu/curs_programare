//Suma diagonalelor unei matrici

#include <stdio.h>

int main() {
     int i,j,arr1[50][50],sum=0,n,m=0;

     printf("\n\nSuma elementelor de pe diagonala dreapta a unei matrici :\n");
     printf("---------------------------------------\n");

     printf("Introduceti dimensiunea matricii patrate (un nr. intreg) : ");
     scanf("%d", &n);
     m=n;
     printf("Introduceti elementele matricii:\n");
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
             printf("elementul - [%d],[%d] : ",i,j);
             scanf("%d",&arr1[i][j]);
         }
     }

     printf("Matricea este :\n");
     //for-----
     //for-----
     //-----
     //-----
     //-----
     //-----

     //doar un for: for ();
     
    printf("Suma elementelor de pe diagonala dreapta :%d\n",sum);
    return 0;
  }


/*
-----output------


Suma elementelor de pe diagonala dreapta a unei matrici :
---------------------------------------
Introduceti dimensiunea matricii patrate (un nr. intreg) : 4
Introduceti elementele matricii:
elementul - [0],[0] : 1
elementul - [0],[1] : 2
elementul - [0],[2] : 3
elementul - [0],[3] : 4
elementul - [1],[0] : 5
elementul - [1],[1] : 6
elementul - [1],[2] : 7
elementul - [1],[3] : 8
elementul - [2],[0] : 9
elementul - [2],[1] : 10
elementul - [2],[2] : 11
elementul - [2],[3] : 12
elementul - [3],[0] : 13
elementul - [3],[1] : 14
elementul - [3],[2] : 15
elementul - [3],[3] : 16
Matricea este :
   1   2   3   4
   5   6   7   8
   9  10  11  12
  13  14  15  16
Suma elementelor de pe diagonala dreapta :34

-------------------
*/
