#include<stdio.h>

#define NR_S 200 /*dimensiune suficient de mare a sirului*/

int main()
{
   int note[NR_S],max,i,studenti,suma=0;
   printf("Numarul de studenti (max %d): ", NR_S);
   scanf("%d", &studenti);
   printf("Introduceti notele\n");
   for(i=0; i < studenti; i++)
   {
       scanf("%d", &note[i]);
   }
   max = 0;
   for(i=0; i< studenti; i++)
   {
      suma = suma + note[i];
      if (note[i] > max)
      {
         max = note[i];
      }
   }
   printf("Cea mai mare nota este %d\n", max);
   printf("Suma este %d\n", suma);
   printf("Media este %f\n", (float)suma/studenti);
   return 0;
}
