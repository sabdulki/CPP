
/* REFERENCES ADN POINTERS */

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper
#include <fstream>  // Required for file handling
using namespace std;

void increment(int &num) {
    num++;
}

/* You must initialize a reference when you declare it. 
This binds the reference to the variable, and it cannot be changed later. 
And it cannot be NULL, unlike pointers. So reference is much more safer, 
because it always points to the valid memory location. 
Refernce Does not have its own memory address; it uses the original variable's memory. */

/* Common use: 
Function parameters: When passing large objects or when modifications are needed INSIDE the function. 
Passing by reference can avoid copying large amounts of data, which is more efficient:
*/

int main() {
    int value = 42;
    increment(value);  // value becomes 43
    increment(value);  // value becomes 43
    increment(value);  // value becomes 43
	cout << value;

	int a = 5;
	int &ref = a;   // ref is a reference to a

}




