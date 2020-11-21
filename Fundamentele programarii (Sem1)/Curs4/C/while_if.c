#include <stdio.h>

int main()
{
  int sumn = 0, cntn = 0, sump = 0;
  int cntp = 0, cnt = 0;
  int tmp;
  float avgn, avgp;

  while (tmp != -9999) {

     printf("pozitiv count: %i, sum: %i, avg: %f\n",cntp, sump, avgp);
     printf("negativ count: %i, sum: %i, avg: %f\n",cntn, sumn, avgn);

     printf("Numarul %i\n", cnt);
     scanf ("%i",&tmp);
     cnt = cnt + 1;

     if (tmp < 0) {
         cntn++;
         sumn = sumn + tmp;
         avgn = (float)sumn / cntn;
     } else if (tmp > 0) {
         cntp++;
         sump = sump + tmp;
         avgp = (float)sump / cntp;
     }
  }
  return 0;
}
