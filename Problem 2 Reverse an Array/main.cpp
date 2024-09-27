#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; // the size of the vector
	cout << "The size of the vector: " ;
	cin >> n;
  
	vector <int> v(n); // declaring a vector v
	for(int i=0; i<n; i++) { // loop to input values into the vector
		int x; // the value given by the user
		cin >> x;
		v.push_back(x); // push x to vector of v
	}

	reverse(v.begin(), v.end()); // reversing the vector
	for(int i=0; i<=n-1; i++) { // printing the reversed vector
		if(i == 0) {
			cout << '[' << v[i] << ", ";
		} else if(i == n-1) {
			cout << v[i] << ']';
		} else {
			cout << v[i] << ", ";
		}
	}

	return 0; // end program
}
