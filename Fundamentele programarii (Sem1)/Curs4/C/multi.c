#include<stdio.h>

int main()
{

   char arr[7][20] = {};
   int i,j;

   arr[0][15] = 94;
   arr[0][16] = 94;
   arr[1][13] = 94;
   . . . . .
   arr[6][18] = 126;
   arr[6][19] = 94;

   for(i=0; i<=6;i++) {
       for (j=0; j<20; j++) {
            if (arr[i][j] > 0) {
                printf("%c",arr[i][j]);
            } else {
                printf(" ");
            }
       }
       printf("\n");
   }

return 0;
}
