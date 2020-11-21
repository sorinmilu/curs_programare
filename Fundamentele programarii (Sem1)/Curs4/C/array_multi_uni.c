#include <stdio.h>

int main()
{
   int arr[2][4][3] = {
    { {2,3,5}, {6,7,4},{3,9,11},{0,17,10} },
    { {22,23,25}, {26,27,24}, {23,29,211}, {20,217,210} }
   };
   int i,j,k;
   printf("---Acces multidimensional-------\n");
   for(i=0; i<2;i++) {
       for (j=0; j<4; j++) {
           for (k=0; k<3; k++) {
               printf("arr[%i][%i][%i] = %d\n", i,j,k,arr[i][j][k]);
           }
       }
   }
   printf("\n---Acces unidimensional-------\n");
   for(i=0; i<24;i++) {
        printf("arr[0][0][%i] = %d\n", i,arr[0][0][i]);
   }
   return 0;
}
