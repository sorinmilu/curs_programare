//gcc -Wall struct_array_function.c -o struct_array_function

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


void printstruct(bolovan piatra[], int count);

int main()
{
   element eal = {"Aluminiu", "Al", 13};
   element eo = {"Oxigen", "O", 8};
   element esi = {"Siliciu", "Si", 14};
   element ebe = {"Beriliu", "Be", 4};
   element ec = {"Carbon", "C", 6};
   bolovan stones[] = {{"Rubin", "Corindon", 2, {eal, eo}},
            {"Smarald", "Beril", 4, {ebe, eal,esi,eo}}};

   printstruct(stones, 2);
}

void printstruct (bolovan piatra[], int count) {
  for (int j=0; j<count; j++) {
     printf ("Nume: %s\n", piatra[j].nume);
     printf ("Nume stiintific: %s\n", piatra[j].snume);
     for (int i = 0; i < piatra[j].nel; i++) {
       printf ("--->%s Z: %d\n", piatra[j].chimism[i].nume, piatra[j].chimism[i].nrat);
     }
  }
}

