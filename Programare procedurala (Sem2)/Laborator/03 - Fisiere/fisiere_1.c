#include <stdio.h>
#include <string.h>


int main()
{
    char nume[] =  "Ionescu";
    char prenume[] =  "Gigel";

    printf ("%s, %s\n", nume, prenume);


    FILE * fp;
    fp = fopen ("file.txt", "w+");
    fwrite(nume , 1 , strlen(nume) , fp );
    fwrite(prenume , 1 , strlen(prenume) , fp );
    fclose(fp);
}
