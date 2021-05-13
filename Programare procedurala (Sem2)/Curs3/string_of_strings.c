//gcc -Wall string_of_strings.c -o string_of_strings

#include <stdio.h>

int main() {
 char cuvinte[3][50] =
{"zero", "one", "two"};

 for (int i = 0; i < 3; i++) {
   printf("%s\n", cuvinte[i]);
 }

 return 0;
}
