#include <stdio.h>
#include <string.h>


int
main ()
{
  char str[150];

  char nume[] = "Ionescu";
  char prenume[] = "Gigel";

  printf ("%s, %s\n", nume, prenume);


  FILE *fp;
  fp = fopen ("file.txt", "w+");
  str[0] = '\0';
  strcpy (str, nume);
  strcat (str, ",");
  strcat (str, prenume);
  strcat (str, "\n");
  printf ("strlen: %ld sizeof %ld", strlen (str), sizeof (str));
  fwrite (str, 1, strlen (str), fp);
  fclose (fp);
}


