//gcc -Wall struct_in_struct.c -o struct_in_struct

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


int main()

{

    element eal = {"Aluminiu", "Al", 13};
    element eo = {"Oxigen", "O", 8};
    element esi = {"Siliciu", "Si", 14};
    element ebe = {"Beriliu", "Be", 4};
    element ec = {"Carbon", "C", 6};

    bolovan stones[] = {{"Rubin", "Corindon", 2, {eal, eo}},
             {"Smarald", "Beril", 4, {ebe, eal,esi,eo}}};


    printf ("Nume: %s\n", stones[0].nume);
    for (int i = 0; i < stones[0].nel; i++) {
        printf ("--->%s Z: %d\n", stones[0].chimism[i].nume, stones[1].chimism[i].nrat);
    }

    printf ("Nume: %s\n", stones[1].nume);
    for (int i = 0; i < stones[1].nel; i++) {
        printf ("--->%s Z: %d\n", stones[1].chimism[i].nume, stones[1].chimism[i].nrat);
    }

}
