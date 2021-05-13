#include <stdio.h>
#include <string.h>
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
  int pers;
  int i;
  printf ("Introduceti numarul de persoane \n");
  scanf("%i", &pers);
  addr p1[pers];
  for (i=0; i<pers; i++) {

  printf ("Introduceti numele pentru persoana nr %d (maximum %d): \n",i , MAX_SIZE);
  fgets (p1[i].nume, MAX_SIZE, stdin);
  cleannewline (p1[i].nume);
  printf ("Introduceti prenumele pentru persoana nr %d (maximum %d): \n",i , MAX_SIZE);
  fgets (p1[i].prenume, MAX_SIZE, stdin);
  cleannewline (p1[i].prenume);
  printf ("Introduceti telefonul pentru persoana nr %d (maximum %d): \n",i , MAX_SIZE);
  fgets (p1[i].telefon, MAX_SIZE, stdin);
  cleannewline (p1[i].prenume);
  }

  for (i=0; i<pers; i++) {
    printf("%s\n", p1[i].nume);
    printf("%s\n", p1[i].prenume);
    printf("%s\n", p1[i].telefon);
  }

}


void cleannewline (char *str)
{
  while (*str != '\n')
    {
      str++;
    }
  *str = '\0';
}



