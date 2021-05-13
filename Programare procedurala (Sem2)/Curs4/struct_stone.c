//gcc -Wall struct_stone.c -o struct_stone

#include <stdio.h>
#include <string.h>

struct Stone
   {
       char nume[50];
       char snume[50];
       char formula[50];
       int duritate;
       float refr;
       char foto[30];
       char clr[30];
   };


int main()

{
   struct Stone rubin, safir, smarald, diamant;

   strcpy(rubin.nume, "Rubin");
   strcpy(rubin.snume, "Corindon");
   strcpy(rubin.formula, "Al2O3");

   printf ("Nume: %s\n", rubin.nume);
   printf ("Nume stiintific: %s\n", rubin.snume);
   printf ("Formula chimica: %s\n", rubin.formula);

}
