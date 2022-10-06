#include <vector>
#include <iostream>
using namespace std;

// function to reverse a vector
vector<int>to_reverse(vector<int>v) {
    int i = 0;
    int j = v.size() - 1;
    int pivot = v.size() / 2;
    int temp = 0;

    if (v.size() % 2 == 0) {
        while (i<j)
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            --j;
            ++i;
        }
    } else {
        while (i < pivot && j > pivot)
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            --j;
            ++i;
        }
        
    }
    return v;
}

//driver program
int main () {
    vector<int>v = {1, 2, 3, 4, 5};
    vector<int>reversed = to_reverse(v);
    cout << "Reversed Vector: \n";
    for (int& i:reversed) cout << i << " ";
}