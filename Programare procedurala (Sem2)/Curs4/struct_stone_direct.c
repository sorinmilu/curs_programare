//gcc -Wall struct_stone_direct.c -o struct_stone_direct

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
   struct Stone rubin = {"Rubin", "Corindon", "Al2O3", 9, 1.76, "ruby.jpg", "rosu"};
   struct Stone safir = {"Safir", "Corindon", "Al2O3", 9, 1.76, "safir.jpg", "albastru"};
   struct Stone smarald = {"Smarald", "Beril", "Be3Al2Si6O18", 8, 1.59, "smarald.jpg", "verde"};
   struct Stone diamant = {"Diamant", "Diamant", "C", 10, 2.41, "diamant.jpg", "incolor"};

   puts ("Rubin\n");
   printf ("Nume: %s\n", rubin.nume);
   printf ("Nume stiintific: %s\n", rubin.snume);
   printf ("Formula chimica: %s\n", rubin.formula);
   puts ("\nSmarald\n");
   printf ("Nume: %s\n", smarald.nume);
   printf ("Nume stiintific: %s\n", smarald.snume);
   printf ("Formula chimica: %s\n", smarald.formula);
}
