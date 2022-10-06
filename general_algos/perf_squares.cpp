#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

//function to find all perfect squares in a given range.
vector<int> perf_squares(int i, int j) {
    vector<int>squares;
    double square = 0;
    for (i; i <= j; ++i) {
        square = sqrt(i);
        if ((int)(square) == square) {
            squares.push_back(i);
        } 
    }
    return squares;
}

//driver program
int main () {
    int i = 1;
    int j = 20;
    vector<int>squares = perf_squares(i, j);
    for (auto& i:squares) cout << i << " ";
}