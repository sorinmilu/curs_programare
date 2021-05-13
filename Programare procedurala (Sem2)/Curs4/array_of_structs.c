//gcc -Wall array_of_struct.c -o array_of_struct

#include <stdio.h>
#include <string.h>

struct Stone
   {
       char *nume;
       char *snume;
       char *formula;
       int duritate;
       float refr;
       char *foto;
       char *clr;
   };


int main()

{
   struct Stone stones[4];

   stones[0].nume =  "Rubin";
   stones[0].snume = "Corindon";
   stones[0].formula = "Al2O3";

   printf ("Nume: %s\n", stones[0].nume);
   printf ("Nume stiintific: %s\n", stones[0].snume);
   printf ("Formula chimica: %s\n", stones[0].formula);
}
