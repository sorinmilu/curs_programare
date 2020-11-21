#include <stdio.h>

int main () {

 int a;
 int b = 10;
 printf("b inainte de for %d\n", b);
 for( a = 10; a < 15; a = a + 1 ){
    printf("a = %d\n", a);
    int c = 2;
    a++;
    b = a;
    c = a;
    printf("b in for %d\n", b);
    printf("c in for %d\n", c);
 }
 printf("b dupa for %d\n", b);
 printf("c dupa for %d\n", c);

 return 0;
}
