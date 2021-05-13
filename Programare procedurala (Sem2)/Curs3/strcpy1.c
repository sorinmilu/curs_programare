//gcc -Wall strcpy1.c -o strcpy1

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
 char cuvinte[3][50];

 strcpy(cuvinte[0], "zero");
 strcpy(cuvinte[1], "one");
 strcpy(cuvinte[2], "two");

 for (int i = 0; i < 3; i++) {
   printf("%s\n", cuvinte[i]);
 }
 return 0;
}
