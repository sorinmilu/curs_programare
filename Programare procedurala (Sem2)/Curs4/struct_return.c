//gcc -Wall struct_return.c -o struct_return

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


bolovan fillstruct();

int main()
{
   bolovan smarald = fillstruct();
   printf ("Nume: %s\n", smarald.nume);
   printf ("Nume stiintific: %s\n", smarald.snume);
   for (int i = 0; i < smarald.nel; i++) {
       printf ("--->%s Z: %d\n", smarald.chimism[i].nume, smarald.chimism[i].nrat);
   }
}

bolovan fillstruct () {
   element eal = {"Aluminiu", "Al", 13};
   element eo = {"Oxigen", "O", 8};
   element esi = {"Siliciu", "Si", 14};
   element ebe = {"Beriliu", "Be", 4};
   bolovan piatra = {"Smarald", "Beril", 4, {ebe, eal,esi,eo}};
   return piatra;
}

