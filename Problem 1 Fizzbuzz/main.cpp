#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector <string> v; // a vector of type string is declared
	for(int i=1; i<=100; i++) { // a for loop that iritates over the number from 1 to 100
		if(i % 3 == 0 && i % 5 == 0) { // if i is divisble by both 3 and 5, the program display "FizzBuzz" to the vector v
			v.push_back("FizzBuzz");
		} else if(i % 3 == 0) { // if i is divisble by 3 but not by 5, the program display "Fizz" to the vector v
			v.push_back("Fizz");
		} else if(i % 5 == 0) { // if i is divisble by 5 but not by 3, the prgoram display "Buzz" to the vector v
			v.push_back("Buzz");
		} else { // if i  is divisble by neither 3 or 5, the program converts the interger i to a string using "to_string(i)" and display the string version of the number into the vector v
			string s = to_string(i);
			v.push_back(s);
		}
 	}

 	for (auto x : v) { // after the loop finish, the program uses a range-based for loop to iterate over the vector v. The variable x will take each element of the vector one by one
 		cout << x << ' '; // print each element followed by a newline
 	}
    cout <<'\n' ;
    
 	return 0; // end program
}
