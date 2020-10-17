/* Exemplu de switch/case fara break

gcc -Wall switch-nobreak.c -o switch-nobreak

*/


#include <stdio.h>

int main () {
   char gr = 'B';
   switch(gr) {
      case 'A' :
         printf("%c: Excelent!\n", gr );
      case 'B' :
         printf("%c: Close, but no cigar\n", gr );
      case 'C' :
         printf("%c: On the top of gauss hat\n", gr);
      case 'D' :
         printf("%c: Still in school, not for long\n", gr);
      case 'F' :
         printf("%c: you need a job\n", gr);
      default :
         printf("%c: Invalid grade\n", gr);
   }
   return 0;
}


