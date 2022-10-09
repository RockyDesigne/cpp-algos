#include <vector>
#include <iostream>
using namespace std;

vector<int> bubble(vector<int> v)
{
    int total_swaps = 0;
    int number_of_swaps = 0;
    for (int i = 0; i < v.size(); i++)
    {
        // Track number of elements swapped during a single array traversal
        total_swaps += number_of_swaps;
        number_of_swaps = 0;

        for (int j = 0; j < v.size() - 1; j++)
        {
            // Swap adjacent elements if they are in decreasing order
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                ++number_of_swaps;
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if (number_of_swaps == 0)
        {
            return v;
        }
    }
    return v;
}

// driver program
int main()
{
    vector<int> v = {4, 3, 2, 1};
    vector<int> sorted = bubble(v);
    for (int &i : sorted)
        cout << i << " ";
    return 0;
}