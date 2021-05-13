//gcc -Wall pointers_to_struct.c -o pointers_to_struct

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
   struct Stone *prubin, *psafir, *psmarald, *pdiamant, rubin, safir, smarald, diamant;

   prubin = &rubin; psafir = &safir; pdiamant = &diamant; psmarald = &smarald;

   prubin->nume =  "Rubin";
   prubin->snume = "Corindon";
   prubin->formula = "Al2O3";

   printf ("Nume: %s\n", prubin->nume);
   printf ("Nume stiintific: %s\n", prubin->snume);
   printf ("Formula chimica: %s\n", prubin->formula);
}
