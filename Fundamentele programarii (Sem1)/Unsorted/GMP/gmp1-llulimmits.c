#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main(){
   long long k;
   unsigned long long x;

   /* 1. Print the machine native <span class="builtin">int</span> size and the max/min integer */
   printf ("Size of integers in this computer = %ld bits \n", sizeof(int) * 8);
   printf ("The largest int representable is %lld \n", LLONG_MAX);
   printf ("The smallest int representable is %lld \n", LLONG_MIN);
   printf ("The largest unsigned int representable is %llu \n", ULLONG_MAX);

   /* 2. Let us add 1 to INT_MAX */
   k = LLONG_MAX;
   printf ("\n\nAdaugam 1 la %lld", k);
   printf (" %lld + 1 = %lld \n", k,k+1);

   x = ULLONG_MAX;
   printf ("\n\nAdaugam 1 la %llu", x);
   printf (" %lld + 1 = %llu \n", x,x+1);




   /* 3. Input a number x and print its binary representation out */

//   printf ("Enter x:");
//   scanf("%d",&x);
//   printf ("The binary reprentation LSB --> MSB is: ");
//   for (i=0; i < 8 * sizeof(int); ++i){
//
//       if (x %2 == 0)
//          printf ("0");
//       else
//          printf("1");
//
//       x = x >> 1; // Shift right by 1
//
//   }
//
//   printf ("\n");

}
