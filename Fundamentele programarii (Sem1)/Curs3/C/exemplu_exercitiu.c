#include <stdio.h>

int main()
{
     int marks[100];
     int i;
     int n;
     int sum = 0;
     float average;

     printf("Introduceti numarul de elemente: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("introduceti elementul %d: ",i+1);
          scanf("%d", &marks[i]);
          sum += marks[i];
     }

     average = (float)sum/n;
     printf("Media = %f \n", average);

     return 0;
}

/*
-----output------

Introduceti numarul de elemente: 3
introduceti elementul 1: 5
introduceti elementul 2: 7
introduceti elementul 3: 1
Media = 4.333333

-------------------
*/

