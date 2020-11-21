#include <stdio.h>

int main()
{
   int arr[4][3] = {{2,3,5},{6,7,4},{3,9,11},{0,17,10}};
   int i;
   int j;

   printf("---Acces multidimensional----\n");

   for(i=0; i<4;i++) {
       for (j=0; j<3; j++) {
         printf("arr[%i][%i] = %d\n",i,j,arr[i][j]);
       }
   }

   printf("\n--Acces unidimensional-----\n");

   for(i=0; i<12;i++) {
        printf("arr[0][%i] = %d\n",i,arr[0][i]);
   }

   return 0;
}

