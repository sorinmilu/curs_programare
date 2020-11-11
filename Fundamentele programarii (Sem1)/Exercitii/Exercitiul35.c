// Suma a doua matrici patrate 2 * 2

#include <stdio.h>
int main()
{
  float a[2][2] = {{3.3,4.9},{6.2,7.4}};
  float b[2][2]= {{8.2,9.7},{11.1,12.13}};
  float result[2][2];

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      result[i][j] = a[i][j] + b[i][j];
    }
  }
  // Displaying the sum
  printf("\nMatricea rezultanta:\n");

     //for-----
     //for-----
     //-----
     //if-----
     //-----
     //-----
     //-----
  return 0;
}

/*
-----output------

Matricea rezultanta:
11.5    14.6
17.3    19.5

-------------------
*/