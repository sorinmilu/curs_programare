#include <stdio.h>

int main() {
 #define a 20
 #define b 10
 #define c 15
 #define d 5
 int e;
 e = a + b * c / d;      // 20 +  15
 printf("a este : %i\n",  a );
 printf("b este : %i\n",  b );
 printf("c este : %i\n",  c );
 printf("d este : %i\n",  d );
 printf("Valoarea a + b * c / d este : %d\n",  e );
 return 0;
}
