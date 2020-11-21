#include <stdio.h>
#include <math.h>

const double pi= 3.14159265;
int main()
{
   double x = pi/2;
   double y = sin(x);
   double z = cos(x);
   printf("sin pi/2 = %f\n", y);
   printf("cos pi/2 = %f\n", z);
   return 0;
}
