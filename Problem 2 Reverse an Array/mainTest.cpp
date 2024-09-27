#include <bits/stdc++.h>
using namespace std;

int main() 
{
  // Hardcoded size
	int n = 5; // the size of the vector
	
	vector<int> v = {2, 4, 6, 8, 10}; // declaring and initializing the vector v
    int n = v.size(); // the size of the vector is determined from the initialization

    reverse(v.begin(), v.end()); // reversing the vector

    // Print the reversed vector
    cout << "[";
    for (int i = 0; i < n; i++) {
    if (i == n - 1) {
    cout << v[i] << "]"; // print the last element with closing bracket
        } 
    else 
    {
            cout << v[i] << ", "; // print the rest of the elements
        }
    }
    cout << endl;
		}
    vector <int> v(n) expectedoutput = { 10 8 6 4 2 } 
	} ;
  if (expectedoutput==ans) cout <<"Succesfully"<<'/n';
  else cout << "Failed" << '/n'
}
