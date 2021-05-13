#include <stdio.h>
#include <string.h>

int main ()
{

  char *stra = "ala bala portocala";

  while (*stra != '\0') {
    if(*stra>='a' && *stra<='z') {
        printf("%c", *stra -32 );
    }
    else if(*stra >= 'A' && *stra <= 'Z') {
        printf("%c", *stra + 32);
    } else {
        printf (" ");
    }
    stra++;
  }
  return 0;
}




