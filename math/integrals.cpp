#include <iostream>
#include <cmath>
using namespace std;

void derivative(char x, int n) {
    cout << n << "*" << x << "^" << n-1 << "\n";
}

double definiteIntegral(double a, double b, int power, int constant) {
    double result = 0;
    double x1 = pow(a, power+1)/(power+1); //integrate x
    double x2 = pow(b, power+1)/(power+1);
    result = constant * x2 - constant * x1; // evaluate the integral
    return result;
}

int main () {
    double res = definiteIntegral(13, 22, 3, 2);
    derivative('x', 3);
    cout << res << "\n";
}