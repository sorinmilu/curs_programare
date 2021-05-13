#include <stdio.h>

int main()
{
    char nume[] =  "Ionescu";
    char prenume[] =  "Gigel";

    printf ("%s, %s\n", nume, prenume);


    FILE * fp;
    fp = fopen ("file.txt", "w+");
    fprintf (fp, "%s, %s\n", nume, prenume);
    fclose(fp);
}


