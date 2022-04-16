#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

int k;
double sin(), cos();
int main()
{
  int scrw = 80;
  int scrh = 20;
  int vector = scrw * scrh;

  int depth = 5;
  int screendepth = 2;

  float theta_spacing = 0.07; //unghiul de rotatie incrementala al cercului care deseneaza torul
  float phi_spacing = 0.01; // unghiul de rotatie al torului in jurul axei y

  float i, j;
  float z[vector];

  char b[vector];
  char shade[] = "...,-~:;=!*#$@";

  int scalex = 30;
  int scaley = 15;

  float xrotation = 0.04;
  float yrotation = 0.02;

  int lumscale = 8; //factorul de scalare a luminantei. Se va inmulti cu sqrt(2). Vectorul shade[] trebuie sa aiba lumscale * sqrt(2) intrari

  printf("\x1b[2J");
  for (;;)
  {
    memset(b, 32, vector);
    memset(z, 0, (vector*4));
    for (j = 0; 6.28 > j; j += theta_spacing)
      for (i = 0; 6.28 > i; i += phi_spacing)
      {
        float c = sin(i);
        float d = cos(j);
        float e = sin(xrotation);
        float f = sin(j);
        float g = cos(xrotation);
        float h = d + screendepth;

        float l = cos(i);
        float m = cos(yrotation);
        float n = sin(yrotation);
        float t = c * h * g - f * e;

        float realx = l * h * m - t * n; //coordonata x in spatiul real
        float realy = l * h * n + t * m; //coordonata y in spatiul real
        float realz = c * h * e + f * g + depth; //coordonata z in spatiul real
        float ooz = 1 / realz;

        int x = scrw/2 + scalex * ooz * realx;
        int y = scrh/2 + scaley * ooz * realy;

        float luminance = ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
        int N = lumscale * luminance;
        int o = x + scrw * y;

        if (y < scrh &&  y > 0 && x > 0 && x < scrw && ooz > z[o]) {  //conditia care trimite caracterul in buffer
          z[o] = ooz;
          int shchar = 0;
          if (N > 0) {
            shchar = N;
          }
          b[o] = shade[shchar];
        }
      }
    printf("\x1b[H");
    for (k = 0; k <= vector ; k++) {
      putchar(k % scrw ? b[k] : 10);
    }

    usleep(300000);

    xrotation += 0.04;
    yrotation += 0.02;
  }
}
