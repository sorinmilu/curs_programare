//gcc -Wall struct_stone_pointers.c -o struct_stone_pointers

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
   struct Stone rubin, safir, smarald, diamant;

   rubin.nume =  "Rubin";
   rubin.snume = "Corindon";
   rubin.formula = "Al2O3";

   printf ("Nume: %s\n", rubin.nume);
   printf ("Nume stiintific: %s\n", rubin.snume);
   printf ("Formula chimica: %s\n", rubin.formula);
}

