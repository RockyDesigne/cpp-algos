#include <iostream>
using namespace std;

// fibonacci recursive function
// worst case runtime complexity O(2^n)
int fib(int n) {
    if (n <=2) return 1;
    return fib(n-1) + fib(n-2);
}

//driver program
int main () {
    int n = 9;
    cout << fib(n);
}