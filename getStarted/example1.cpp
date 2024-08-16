#include <iostream>
using namespace std;

// am i allowed to use for loop??

void PrintData();

int main()
{
	/* cout (pronounced "see-out") is an object 
	used together with the insertion operator (<<) 
	to print text.*/
	PrintData();
	return (0);
}

void PrintData(void)
{
	int newNum;
	double newDouble;
	string newString;

	newNum = 123;
	newDouble = 1.2;
	newString = "there is string data type! OMG!!!\n"; 
	cout << "Hello world!\n";
	cout << newNum << ", " << newDouble << ", " << newString;
}