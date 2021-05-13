//g++ -Wall references.cpp -o references

#include <iostream>
using namespace std;

int main () {
    int a = 100;
    int& pa = a;
    int& pa2 = pa;

    cout << "a = " << a << endl;
    cout << "pa = " << pa << endl;
    cout << "pa2 = " << pa2 << endl;
}
