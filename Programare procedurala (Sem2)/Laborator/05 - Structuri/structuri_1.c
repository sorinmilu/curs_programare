#include <stdio.h>

typedef struct {
   char *nume;
   char *prenume;
   char *telefon;
} addr;


int main() {

   addr p1, p2;
   p1.nume = "Ionel";
   p1.prenume = "Popescu";
   p1.telefon = "0732543456";

   p2.nume = "Vasile";
   p2.prenume = "Georgescu";
   p2.telefon = "0732863411";

   printf ("P1 Nume = %s\n", p1.nume);
   printf ("P1 Prenume = %s\n", p1.prenume);
   printf ("P1 Tel: = %s\n", p1.telefon);

   printf ("P2 Nume = %s\n", p2.nume);
   printf ("P2 Prenume = %s\n", p2.prenume);
   printf ("P2 Tel: = %s\n", p2.telefon);

}

