#include <iostream>
#include <vector>
using namespace std;

// a function which outputs all primes up to n O(n^2) time
// brute force approach
vector<int>prime(int n) {
    vector<int>primes;
    primes.push_back(2);
    for (int i = 3; i < n; i+=2) {
        int j = i - 1;
        int last_prime = 0;
        while (j > last_prime)
        {
            if (j == 1) {
                primes.push_back(i);
                last_prime = j;
            }
            if ((i % j) == 0) {
                if (j != 1) {
                    break;
                }
            } 
            --j;
        }
    }
    return primes;
}

//driver program
int main () {
    int n = 100;
    vector<int>primes = prime(n);
    for (int& i:primes) cout << i << " ";
}