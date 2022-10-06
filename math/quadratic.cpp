#include <iostream>
#include <cmath>
using namespace std;

// finds x1 and x2 of a polynomial
// if it divides by zero throws error
// a, b, and c are the leading coeficients 
void quadratic(int a, int b, int c) { 
    double minus_top = -b + sqrt(b*b - 4*a*c);
    double plus_top = -b - sqrt(b*b - 4*a*c);
    double bottom = 2*a;
    double x1 = minus_top / bottom;
    double x2 = plus_top / bottom;
    cout << "X1 is: " << x1 << "\n";
    cout << "X2 is: " << x2 << "\n";
}

int main () {
    quadratic(1, 2, -63);
}