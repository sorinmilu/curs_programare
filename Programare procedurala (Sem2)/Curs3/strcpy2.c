//gcc -Wall strcpy2.c -o strcpy2

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
 char * cuvinte[3];

 cuvinte[0] = "zero";
 cuvinte[1] = "one";
 cuvinte[2] = "two";

 for (int i = 0; i < 3; i++) {
   printf("%s\n", cuvinte[i]);
 }
 return 0;
}
