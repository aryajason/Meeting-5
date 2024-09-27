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

vector <string> vTest = {   "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", 
                            "11", "Fizz", "13", "14", "Fizzbuzz", "16", "17", "Fizz", "19", 
                            "Buzz", "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", 
                            "29", "Fizzbuzz", "31", "32", "Fizz", "34", "Buzz", "Fizz", "37", 
                            "38", "Fizz", "Buzz", "41", "Fizz", "43", "44", "Fizzbuzz", "46", 
                            "47", "Fizz",  "49",  "Buzz",  "Fizz", "52", "53", "Fizz", "Buzz", 
                            "56", "Fizz", "58", "59", "Fizzbuzz", "61", "62", "Fizz", "64", 
                            "Buzz", "Fizz", "67", "68", "Fizz", "Buzz", "71", "Fizz", "73", 
                            "74", "Fizzbuzz", "76", "77", "Fizz", "79", "Buzz", "Fizz", "82", 
                            "83", "Fizz", "Buzz", "86", "Fizz", "88", "89", "Fizzbuzz", "91", 
                            "92", "Fizz", "94", "Buzz", "Fizz", "97", "98", "Fizz", "Buzz"  } ;
    
    if (vTest == v) cout<<"The test SUCCESSFULLY passed"<<'\n';
    else cout<<"The test failed "<<'\n';

}
