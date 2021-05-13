#include <stdio.h>
#include <string.h>

typedef struct {
   char nume[50];
   char prenume[50];
   char telefon[50];
} addr;


int main() {

   addr p1, p2;

   strcpy(p1.nume, "Ionel");
   strcpy(p1.prenume, "Popescu");
   strcpy(p1.telefon, "0732543456");

   strcpy(p2.nume, "Vasile");
   strcpy(p2.prenume, "Georgescu");
   strcpy(p2.telefon, "0732863411");

   printf ("P1 Nume = %s\n", p1.nume);
   printf ("P1 Prenume = %s\n", p1.prenume);
   printf ("P1 Tel: = %s\n", p1.telefon);

   printf ("P2 Nume = %s\n", p2.nume);
   printf ("P2 Prenume = %s\n", p2.prenume);
   printf ("P2 Tel: = %s\n", p2.telefon);

}

