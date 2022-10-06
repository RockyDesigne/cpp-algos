#include <vector>
#include <iostream>
#include <cmath>
using namespace std;


// converts binary to decimal
// brute force approach
int binary_to_decimal(vector<int>v) {

    int decimal = 0;
    bool keepgoing = true;
    int i = 0;
    int j = v.size()-1;
    
    while (keepgoing)
    {
        if (i < v.size() && j >= 0) {
            decimal += v[i] * pow(2, j);
        } else {
            keepgoing = false;
        }
        ++i;
        --j;
    }
    
    return decimal;
}

//driver program
int main () {
    vector<int>bits = {1, 1, 1, 1, 1, 1, 1, 1};
    cout << binary_to_decimal(bits);
}