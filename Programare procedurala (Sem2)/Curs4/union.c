//gcc -Wall union.c -o union

#include <stdio.h>
#include <string.h>


union Data {
  int i;
  float f;
  char str[20];
};


int main()  {

   union Data rezultat;
   printf ("Memoria ocupata: %ld\n", sizeof(rezultat));
   rezultat.i = 21;
   printf ("Rezultat i: %d\n", rezultat.i);
   rezultat.f = 21.232;
   printf ("Rezultat f: %f\n", rezultat.f);
   strcpy(rezultat.str, "Nu stiu ce sa scriu");
   printf ("Rezultat str: %s\n", rezultat.str);
   printf ("Rezultat i: %d\n", rezultat.i);
   return 0;
}
