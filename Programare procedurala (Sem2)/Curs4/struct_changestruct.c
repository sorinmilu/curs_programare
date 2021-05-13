//gcc -Wall struct_changestruct.c -o struct_changestruct

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


void changestruct(bolovan piatra);

int main()
{
   element eal = {"Aluminiu", "Al", 13};
   element eo = {"Oxigen", "O", 8};
   element esi = {"Siliciu", "Si", 14};
   element ebe = {"Beriliu", "Be", 4};
   element ec = {"Carbon", "C", 6};
   bolovan smarald = {"Smarald", "Beril", 4, {ebe, eal,esi,eo}};
   printf ("Nume: %s\n", smarald.nume);
   changestruct(smarald);
   printf ("Nume: %s\n", smarald.nume);
}

void changestruct (bolovan piatra) {
   piatra.nume = "Diamant";
   printf ("Nume in changestruct: %s\n", piatra.nume);
}

