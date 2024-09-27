#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Hardcoded vector
    vector<int> v = {2, 4, 6, 8, 10}; // declaring and initializing the vector v
    int n = v.size(); // the size of the vector is determined from the initialization

    reverse(v.begin(), v.end()); // reversing the vector

    // Print the reversed vector
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << v[i] << "]"; // print the last element with closing bracket
        } else {
            cout << v[i] << ", "; // print the rest of the elements
        }
    }
    cout << endl;

    // Expected output for comparison
    vector<int> expected_output = {10, 8, 6, 4, 2}; 

    // Check if the reversed vector matches the expected output
    if (v == expected_output) {
        cout << "Successfully" << "\n";
    } else {
        cout << "Failed" << "\n";
    }

    return 0; // end program
}
