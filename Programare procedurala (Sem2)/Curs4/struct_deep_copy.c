//gcc -Wall struct_deep_copy.c -o struct_deep_copy

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   int *p1;
   int *p2;
} pointeri;

int main() {
   int fvar = 12;
   int *pfvar = &fvar;
   int svar = 123;
   int *psvar = &svar;

   pointeri POI1, POI2;

   POI1.p1 = pfvar;
   POI1.p2 = psvar;
   printf ("POI1.p1 = %d\n", *POI1.p1);
   printf ("POI1.p2 = %d\n", *POI1.p2);
   printf ("Ad POI1.p1 = %p\n", POI1.p1);
   printf ("Ad POI1.p2 = %p\n", POI1.p2);

   POI2.p1 = (malloc(sizeof(int)));
   POI2.p2 = (malloc(sizeof(int)));
   *POI2.p1 = *POI1.p1;
   *POI2.p2 = *POI1.p2;

   fvar = 1921;

   printf ("POI1.p1 = %d\n", *POI1.p1);
   printf ("POI2.p1 = %d\n", *POI2.p1);
   printf ("POI2.p2 = %d\n", *POI2.p2);
   printf ("Ad POI2.p1 = %p\n", POI2.p1);
   printf ("Ad POI2.p2 = %p\n", POI2.p2);
}
