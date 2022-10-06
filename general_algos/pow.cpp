#include <iostream>
using namespace std;

// raises a to the power of b
int pow(int a, int b) {
    int result = a;
    for (int i = 1; i < b; ++i) {
        result*=a;
    }
    return result;
}

int main () {
    cout << pow(2, 8);
}