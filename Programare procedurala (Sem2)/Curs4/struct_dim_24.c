//gcc -Wall struct_dim_24.c -o struct_dim_24

#include <stdio.h>

typedef struct  {
   int a;  // 4 octeti
   int c;  //4 octeti
   double b;   // 8 octeti
   long long int d; // 8 octeti
} VARS;

int main() {
   printf("dim v1 %ld\n", sizeof(VARS) );
   return 0;
}
