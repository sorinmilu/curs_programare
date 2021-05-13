//gcc -Wall strcpy_segfault.c -o strcpy_segfault

#include <stdio.h>
#include <string.h>

int main() {

char * cuvinte[3];

 strcpy(cuvinte[0], "zero");
 strcpy(cuvinte[1], "one");
 strcpy(cuvinte[2], "two");

 for (int i = 0; i < 3; i++) {
   printf("%s\n", cuvinte[i]);
 }
 return 0;
}
