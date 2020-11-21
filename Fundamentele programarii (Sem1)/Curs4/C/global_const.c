#include <stdio.h>

const double PI=3.14159265;

double aria(double raza)
{
   return PI * raza * raza;
}

double lungime(double raza)
{
   return 2 * PI * raza;
}

int main()
{
   double raza = 12;
   printf("Aria cercului: %f\n", aria(raza));
   printf("Lungimea cercului: %f\n", lungime(raza));
   return 0;
}
