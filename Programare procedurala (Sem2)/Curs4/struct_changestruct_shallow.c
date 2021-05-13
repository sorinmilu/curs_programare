//gcc -Wall struct_changestruct_shallow.c -o struct_changestruct_shallow

#include <stdio.h>
#include <string.h>

typedef struct IntPtrs {
   int *p1;
   int *p2;
} pointeri;

void changestruct (pointeri pr);

int main() {
   int fvar = 12;
   int *pfvar = &fvar;
   int svar = 123;
   int *psvar = &svar;

   pointeri POI1, POI2;
   POI1.p1 = pfvar;
   POI1.p2 = psvar;
   printf ("Ad POI1.p1 = %p\n", POI1.p1);
   printf ("Ad POI1.p2 = %p\n", POI1.p2);
   POI2 = POI1;
   changestruct(POI2);
}

void changestruct (pointeri pr) {
   printf ("changestruct: Ad POI2.p1 = %p\n", pr.p1);
   printf ("changestruct: Ad POI2.p2 = %p\n", pr.p2);

}
