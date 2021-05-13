#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main(){
   int k,x,i;

   /* 1. Print the machine native <span class="builtin">int</span> size and the max/min integer */
   printf ("Size of integers in this computer = %ld bits \n", sizeof(int) * 8);
   printf ("The largest int representable is %d \n", INT_MAX);
   printf ("The smallest int representable is %d \n", INT_MIN);

   /* 2. Let us add 1 to INT_MAX */
   k = INT_MAX;

   printf (" %d + 1 = %d \n", k,k+1);

   /* 3. Input a number x and print its binary representation out */

   printf ("Enter x:");
   scanf("%d",&x);
   printf ("The binary reprentation LSB --> MSB is: ");
   for (i=0; i < 8 * sizeof(int); ++i){

       if (x %2 == 0)
          printf ("0");
       else
          printf("1");

       x = x >> 1; // Shift right by 1

   }

   printf ("\n");

}
