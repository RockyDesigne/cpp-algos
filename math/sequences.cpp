#include <iostream>
#include <vector>
using namespace std;

//function to that describes a sequence
// X(n) n>=1
//X(n) => if n is odd => n = n^2 else n = n
vector<int> sequence1(int n) {
    vector<int>result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(i);
        } else {
            result.push_back(i*i);
        }
    }
    return result;
}

vector<int>sequence2(int n) {
    vector<int>v;
    int n_term = 0;
    for (int i = 1; i <= n; ++i) {
        n_term += i * (i+2);
        v.push_back(n_term);
    }
    return v;
}

//function that describes a recursive sequence
// (Xn)n>=1
// X1 = 1
//X(n+1) = X(n)^2 + 1
// runtime complexity O(n)
long long int recursive_sequence(int n) {
    long long int prev_x = 1;
    long long int n_term = 0;
    long long int result = 0;
    for (int i = 0; i < n; ++i) {
        n_term = prev_x*prev_x + 1;
        result = prev_x;
        prev_x = n_term;
        n_term = result;
    }
    return result; 
}

int main () {
    vector<int>seq1;
    vector<int>seq2;
    const int n = 100;

    long long int recursive_num = 0;
    //recursive_num = recursive_sequence(n);

    //seq1 = sequence1(n);
    seq2 = sequence2(n);
    for (int& i:seq2) cout << i << " ";
    cout << endl;
    //cout << "Recursive num: " << recursive_num << endl;

    return 0;
}