//gcc -Wall gems_array.c -o gems_array

#include <stdio.h>
#include <string.h>

int main()
{
   int indc;
   char *nume[4];
   char *snume[4];
   char *formula[4];
   int duritate[4];
   float refr[4];
   char *foto[4];
   char *clr[4];

   nume[0] = "Rubin"; nume[1] = "Safir"; nume[2] = "Smarald"; nume[3] = "Diamant";
   snume[0] = "Corindon"; snume[1] = "Corindon"; snume[2] = "Beril"; snume[3] = "Diamant";
   formula[0] = "Al2O3";formula[1] = "Al2O3";formula[2] = "Be3Al2Si6O18"; formula[3] = "C";
   duritate[0] = 9;duritate[1] = 9;duritate[2] = 8;duritate[3] = 10;
   refr[0] = 1.76;refr[1] = 1.76;refr[2] = 1.59;refr[3] = 2.41;
   foto[0] = "ruby.jpg"; foto[1] = "safir.jpg";foto[2] = "smarald.jpg";foto[3] = "diamant.jpg";
   clr[0] = "rosu";clr[1] = "albastru";clr[2] = "verde"; clr[3] = "incolor";

   puts ("Introduceti indicele (intre 0 si 3)\n");
   scanf("%d", &indc);
   printf("Intrarea cu numarul %d\n\n", indc);
   printf("Nume: %s\n",nume[indc]);
   printf("Nume stiintific: %s\n",snume[indc]);
   printf("Formula chimica: %s\n",formula[indc]);
   printf("Duritate: %d\n",duritate[indc]);
   printf("Indice de refr: %f\n",refr[indc]);
   printf("Fotografie: %s\n",foto[indc]);
   printf("Culoare: %s\n",clr[indc]);

   return 0;
}
