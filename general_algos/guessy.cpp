#include <iostream>
using namespace std;

// a silly interview question
int guessy(int x) {
    int y = 0;
    x = 1;
    y = ++x + ++x;
    return y;
}

int main () {
    int x = 1;
    cout << "What is y: " << endl;
    cout << "Y is: " << guessy(x) << endl;
}