//gcc -Wall struct_copy_man.c -o struct_copy_man

#include <stdio.h>

typedef struct mutare {
   char *start;
   char *end;
} mutare;

int main() {
   mutare m1, m2;
   m1.start = "E2";
   m1.end = "E4";
   printf ("M1.start = %s\n", m1.start);
   printf ("M1.end = %s\n", m1.end);
   m2.start = m1.start;
   m2.end = m1.end;
   printf ("M2.start = %s\n", m2.start);
   printf ("M2.end = %s\n", m2.end);
}
