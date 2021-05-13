//g++ -Wall references2.cpp -o references2

#include <iostream>

using namespace std;

int main () {
 // declararea variabilelor
 int    a = 4;
 double b = 11.21;
 // declararea referintelor
 int&    ra = a;
 double& rb = b;

 cout << "a = " << a << endl;
 cout << "ra : " << ra  << endl;
 cout << "b = " << b << endl;
 cout << "rb = " << rb  << endl;
 return 0;
}
