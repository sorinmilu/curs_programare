#include <stdio.h>
#define MAX_SIZE 50		// Maximum string size

void cleannewline (char *string);

typedef struct
{
  char nume[MAX_SIZE];
  char prenume[MAX_SIZE];
  char telefon[MAX_SIZE];
} addr;


int main ()
{

  addr p1, p2;
  printf ("Introduceti numele pentru prima persoana (maximum %d): \n", MAX_SIZE);
  fgets (p1.nume, MAX_SIZE, stdin);
  printf ("Introduceti prenunumele pentru prima persoana (maximum %d): \n", MAX_SIZE);
  fgets (p1.prenume, MAX_SIZE, stdin);
  printf ("Introduceti telefonul pentru prima persoana (maximum %d): \n", MAX_SIZE);
  fgets (p1.telefon, MAX_SIZE, stdin);

  printf ("Introduceti numele pentru a doua persoana (maximum %d): \n", MAX_SIZE);
  fgets (p2.nume, MAX_SIZE, stdin);
  printf ("Introduceti prenunumele pentru a doua persoana (maximum %d): \n", MAX_SIZE);
  fgets (p2.prenume, MAX_SIZE, stdin);
  printf ("Introduceti telefonul pentru a doua persoana (maximum %d): \n", MAX_SIZE);
  fgets (p2.telefon, MAX_SIZE, stdin);

  cleannewline (p1.nume);
  cleannewline (p1.prenume);
  cleannewline (p1.telefon);
  cleannewline (p2.nume);
  cleannewline (p2.prenume);
  cleannewline (p2.telefon);


  printf ("P1 Nume = %s\n", p1.nume);
  printf ("P1 Prenume = %s\n", p1.prenume);
  printf ("P1 Tel: = %s\n", p1.telefon);

  printf ("P2 Nume = %s\n", p2.nume);
  printf ("P2 Prenume = %s\n", p2.prenume);
  printf ("P2 Tel: = %s\n", p2.telefon);

}


void cleannewline (char *str)
{
  while (*str != '\n')
    {
      str++;
    }
  *str = '\0';
}


