#include <stdio.h>

int numara(void) {
   static int i, stare = 0;
   switch (stare) {
       case 0:
       for (i = 0; i < 10; i++) {
           stare = 1;
           return i;
           case 1:;
       }
   }
}

int main() {
   int c;
   c = numara();
   printf("c este: %d\n", c);
   c = numara();
   printf("c este: %d\n", c);
   c = numara();
   printf("c este: %d\n", c);
}
