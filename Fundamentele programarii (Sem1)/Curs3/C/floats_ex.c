#include <stdio.h>

int main() {

   float a = 1.111111111111111111111111;
   float b = 1111.111111111111111111111;
   float c = 11111111.11111111111111111;
   float d = 111111111111.1111111111111;
   float e = 111111111111111.1111111111;


    printf ("-------------FLOATS------------\n");

    printf ("a este: %.15f\n", a);
    printf ("b este: %.15f\n", b);
    printf ("c este: %.15f\n", c);
    printf ("d este: %.15f\n", d);
    printf ("e este: %.15f\n", e);

   double m = 1.111111111111111111111111;
   double n = 1111.111111111111111111111;
   double o = 11111111.11111111111111111;
   double p = 111111111111.1111111111111;
   double q = 111111111111111.1111111111;

    printf ("-------------DOUBLES------------\n");

    printf ("m este: %.15lf\n", m);
    printf ("n este: %.15lf\n", n);
    printf ("o este: %.15lf\n", o);
    printf ("p este: %.15lf\n", p);
    printf ("q este: %.15lf\n", q);

   return 0;
}