#include <iostream>
#include <vector>
using namespace std;

//function to find factorial of n
long long factorial(long long n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

// non recursive approach
long long int non_recursive_factorial(long long n) {
    long long int temp = n;
    while (n > 1)
    {
        --n;
        temp = temp * (n);
    }
    return temp;
}

int main () {
    //cout << factorial(20);
    cout << non_recursive_factorial(20);
}