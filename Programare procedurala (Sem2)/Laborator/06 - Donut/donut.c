#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int k;
double sin(), cos();
  char shade[] = ".,-~:;=!*#$@";
// char shade[] = "....===@@@@@";
const int scrw = 120;
const int scrh = 44;
int vector = scrw * scrh;
int depth = 5;
int screend = 3;
int scalex = 30;
int scaley = 15;
float theta_spacing = 0.07;
float phi_spacing = 0.02;
int main()
{
  float A = 0, B = 0, i, j, z[vector];
  char b[vector];
  printf("\x1b[2J");
  while (1 == 1)
  {
    memset(b, 32, vector);
    memset(z, 0, vector * 4);
    for (j = 0; 6.28 > j; j += theta_spacing)
      for (i = 0; 6.28 > i; i += phi_spacing)
      {
        float c = sin(i);
        float d = cos(j);
        float e = sin(A);
        float f = sin(j);
        float g = cos(A); 
        float h = d + screend;
        float  D = 1 / (c * h * e + f * g + depth);
        float l = cos(i);
        float m = cos(B);
        float n = sin(B);
        float t = c * h * g - f * e;

        int x = scrw/2 + scalex * D * (l * h * m - t * n);
        int y = scrh/2 + scaley * D * (l * h * n + t * m);
        int o = x + scrw * y;
        int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

        if (y < scrh &&  y > 0 && x > 0 && scrw > x && D > z[o])
        {
          z[o] = D;
          // b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];

          int shchar = 0;
          if (N > 0) {
            shchar = N;
          }
          b[o] = shade[shchar];

        }
      } 
    printf("\x1b[H");

    for (k = 0; vector + 1 > k; k++) {
      putchar(k % scrw ? b[k] : 10);
    }

    A += 0.04;
    B += 0.03;
    usleep(90000);
  }
} 