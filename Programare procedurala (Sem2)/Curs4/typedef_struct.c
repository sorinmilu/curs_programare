//gcc -Wall typedef_struct.c -o typedef_struct

#include <stdio.h>
#include <string.h>

typedef struct
   {
       char *nume;
       char *snume;
       char *formula;
       int duritate;
       float refr;
       char *foto;
       char *clr;
   } bolovan;


int main()

{
   bolovan stones[4];

   stones[0].nume =  "Rubin";
   stones[0].snume = "Corindon";
   stones[0].formula = "Al2O3";

   printf ("Nume: %s\n", stones[0].nume);
   printf ("Nume stiintific: %s\n", stones[0].snume);
   printf ("Formula chimica: %s\n", stones[0].formula);
}
