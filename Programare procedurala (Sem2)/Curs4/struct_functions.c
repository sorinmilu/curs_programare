//gcc -Wall struct_functions.c -o struct_functions

#include <stdio.h>
#include <string.h>

typedef struct {
   char *nume;
   char *simbol;
   int nrat;
} element;

typedef struct {
    char *nume;
    char *snume;
    int nel;
    element chimism[10];
} bolovan;


void printstruct(bolovan piatra);

int main()
{

   element eal = {"Aluminiu", "Al", 13};
   element eo = {"Oxigen", "O", 8};
   element esi = {"Siliciu", "Si", 14};
   element ebe = {"Beriliu", "Be", 4};
   element ec = {"Carbon", "C", 6};
   bolovan rubin = {"Rubin", "Corindon", 2, {eal, eo}};
   bolovan smarald = {"Smarald", "Beril", 4, {ebe, eal,esi,eo}};

   printstruct(smarald);
}

void printstruct (bolovan piatra) {
   printf ("Nume: %s\n", piatra.nume);
   printf ("Nume stiintific: %s\n", piatra.snume);
   for (int i = 0; i < piatra.nel; i++) {
       printf ("--->%s Z: %d\n", piatra.chimism[i].nume, piatra.chimism[i].nrat);
   }
}

