#include <vector>
#include <iostream>
using namespace std;

// finds min element of a vector
int min_element(vector<int>v) {
    int min_element = v[0];
    for (int i = 0; i < v.size(); ++i) {

        if (v[i] < min_element) {
            min_element = v[i];
        }
    }
    return min_element;
}

// finds max element of a vector
int max_element(vector<int>v) {
    int max_element = 0;
    for (int i = 0; i < v.size(); ++i) {

        if (v[i] > max_element) {
            max_element = v[i];
        }
    }
    return max_element;
}

//driver program
int main () {
    vector<int>v = {1, 2, 3, 4, 5};
    cout << "Min Element: " << min_element(v) << endl;
    cout << "Max Element: " << max_element(v) << endl;
}