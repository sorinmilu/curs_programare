//gcc -Wall struct_copy_attr.c -o struct_copy_attr

#include <stdio.h>

typedef struct {
   char *start;
   char *end;
} mutare;

int main() {

   mutare m1, m2;
   m1.start = "E2";
   m1.end = "E4";
   printf ("M1.start = %s\n", m1.start);
   printf ("M1.end = %s\n", m1.end);
   m2 = m1;
   printf ("M2.start = %s\n", m2.start);
   printf ("M2.end = %s\n", m2.end);
}
