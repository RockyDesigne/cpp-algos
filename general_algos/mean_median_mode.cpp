#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double mean (vector<int>v) {
    int length = v.size();
    double sum = 0;
    double mean = 0;
    for (auto num:v) {
        sum += num;
    }
    mean = sum / length;
    return mean;
}

double median(vector<int>v) {
    int length = v.size();
    double median = 0;
    double x1 = 0;
    double x2 = 0;
    sort(v.begin(), v.end());
    if (length % 2 == 0) {
        x1 = v[length / 2];
        x2 = v[length / 2 - 1];
        median = (x1 + x2) / 2; 
    } else {
        x1 = length / 2;
        median = v[x1];
    }
    return median;
}

int mode(vector<int>v) {
    int length = v.size();
    int mode = *min_element(v.begin(), v.end());
    int count = 1;
    int temp_count = 1;

    sort(v.begin(), v.end());
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length - 1; ++j) {
            if (v[i] == v[j]) {
                ++temp_count;
            }
            if (temp_count > count) {
                mode = v[i];
                count = temp_count;
   }
    temp_count = 1; 
        }
    }
    return mode;
}

//driver program
int main () {
    vector<int>v = {1, 2, 3, 4, 5};
    cout << "Mean: " << mean(v) << endl;
    cout << "Median: " << median(v) << endl;
    cout << "Mode: " << mode(v) << endl;
}