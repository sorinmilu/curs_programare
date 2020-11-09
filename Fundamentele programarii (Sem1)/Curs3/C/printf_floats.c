#include <stdio.h>

int main()
{
   float c = 342.43543453;
   //Utilizand doar specificatorul %f
   printf("%f\n", c);
   //Specificatorul de float cu semnul fortat
   printf("%+f\n", c);
   //Specificatorul de float cu minus sau spatiu
   printf("% f\n", c);
   //Specificatorul de float cu numar si precizie
   printf("%5.2f\n", c);
   //Specificatorul de float cu partea intreaga si precizie
   printf("%7.2f\n", c);
   //Specificatorul de float cu partea intreaga si precizie ca parametrii
   printf("%*.*f\n", 8, 5, c);
   return 0;
}
