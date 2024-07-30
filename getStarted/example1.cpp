#include <iostream>
using namespace std;

int main()
{
	/* cout (pronounced "see-out") is an object 
	used together with the insertion operator (<<) 
	to print text.*/
	int newNum;
	double newDouble;
	string newString;

	newNum = 123;
	newDouble = 1.2;
	newString = "there are string data type! OMG!!!\n"; 
	cout << "Hello world!\n";
	cout << newNum << ", " << newDouble << ", " << newString;
	return (0);
}