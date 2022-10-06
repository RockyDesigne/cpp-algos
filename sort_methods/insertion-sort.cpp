#include <vector>
#include <iostream>
using namespace std;

// insertion sort implementation
// worst case run-time complexity O(n^2)
vector<int> insertion_sort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int curr = arr[i];
            if (arr[j] < arr[i]) {
                arr[i] = arr[j];
                arr[j] = curr;
            }
        }
    }

    return arr;
}

//driver program
int main () {
    vector<int>v = {2, 7, 1, 9, 10};
    vector<int>sorted_v = insertion_sort(v);
    for (auto& i:sorted_v) {
        cout << i << " ";
    }
    return 0;
}