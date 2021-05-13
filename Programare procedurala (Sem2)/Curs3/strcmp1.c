//gcc -Wall strcmp1.c -o strcmp1


#include <stdio.h>
#include <string.h>

int main () {
  char str1[20];
  char str2[20];
  int result;

  strcpy(str1, "caracatita");
  strcpy(str2, "CARACATITA");

  result = strcmp(str1, str2);

  if(result > 0) {
     printf("str1 > str2 (result: %d)\n", result);
  } else if(result < 0) {
     printf("str1 < str2 (result: %d)\n", result);
  } else {
     printf("str1 == str2 (result: %d)\n", result);
  }
  return 0;
}
