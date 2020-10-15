/*

   Programul trebuie intai compilat, se obtine un executabil care apoi se poate executa singur
   Compilarea se face:
    linux (gcc): g++ -Wall -o putere_obiectual putere_obiectual.cpp

*/


#include <iostream>
using namespace std;

class Matematica
{
   float pi=3.14;

   public:
       int putere(int m, int n){
           int i, p=1;
           for (i=1; i<=n; i++) {
              p = p * m;
           }
           return p;
       }
};

int main()
{
  Matematica mate;
  int a=3;
  int b=5;
  int c = mate.putere(a,b);
  cout << a << " la puterea " << b << " este " << c;
}
