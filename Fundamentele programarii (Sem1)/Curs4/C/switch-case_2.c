#include<stdio.h>


int main () {
  char gr = 'B';
  switch(gr) {
     case 'A' :
     case 'B' :
     case 'C' :
        printf("%c: OK\n", gr);
        break;
     case 'D' :
     case 'F' :
        printf("%c: Not OK\n", gr);
        break;
     default :
        printf("%c: Invalid grade\n", gr);
  }
  return 0;
}
