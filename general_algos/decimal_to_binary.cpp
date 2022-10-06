#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

//  function that converts decimal numbers to binary numbers
// brute force method
vector<int>decimal_to_binary(int n) {
    vector<int>fourbits(8, 0); // choose how many bits to have
    int i = 0;
    int j = fourbits.size()-1;
    int sum = 0;
    long long basetwo = 0;
    bool keepgoing = true;
    if (n == 0) {
        return fourbits;
    }
    while (keepgoing)
    {
        if (j < 0 || i == fourbits.size()) {
            break;
        }
        basetwo = pow(2, j);
        if (basetwo <= n) {
             if ((sum + basetwo) <= n) {
                sum += basetwo;
                fourbits[i] = 1;
            }
        }
        ++i;
        --j;
    }
    return fourbits;
}

//driver program 
int main () {
    int dec = 255;
    vector<int>bits = decimal_to_binary(dec);
    for (auto& i:bits) cout << i << " ";
}