include <stdio.h>


int main()
{
   long aa = 999999999999999999;
   float bb = 1.1417654;
   printf("aa - long - este %li \n", aa);
   printf("aa - int -  este %i \n", (int)aa);
   printf("aa - short - este %i \n", (short)aa);

   printf("bb - float - este %f \n", bb);
   printf("bb - int - este %i \n", (int)bb);
   printf("bb - int as float - este %f \n", (int)bb);
   return 0;
}
