#include<stdio.h>

int main () {
  char gr = 'B';
  switch(gr) {
     case 'A' :
        printf("%c: Excelent!\n", gr );
        break;
     case 'B' :
        printf("%c: Close, but no cigar\n", gr );
        break;
     case 'C' :
        printf("%c: On the top of gauss hat\n", gr);
        break;
     case 'D' :
        printf("%c: Still in school, not for long\n", gr);
        break;
     case 'F' :
        printf("%c: you need a job\n", gr);
        break;
     default :
        printf("%c: Invalid grade\n", gr);
  }
  return 0;
}
