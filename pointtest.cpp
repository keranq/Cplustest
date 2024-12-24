#include "bits/stdc++.h"
using namespace std;

// Function to rotate every i-th
// row of the matrix i times
void rotateMatrix(vector<vector<int> >& mat)
{
    int i = 0;

    // Traverse the matrix row-wise
    for (auto& it : mat) {

        // Reverse the current row
        reverse(it.begin(), it.end());

        // Reverse the first i elements
        reverse(it.begin(), it.begin() + i);

        // Reverse the last (N - i) elements
        reverse(it.begin() + i, it.end());

        // Increment count
        i++;
    }

    // Print final matrix
    for (auto rows : mat) {
        for (auto cols : rows) {
            cout << cols << " ";
        }
        cout << "\n";
    }
}

// Driver Code
int main()
{
    vector<vector<int> > mat
        = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    rotateMatrix(mat);

    return 0;
}