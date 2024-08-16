#include <iostream>
#include <string>
#include <cmath> // Include the cmath library
using namespace std;

//string functions are like  varible with string data type .append(arg)
// am i allowed to use for loop??

void PrintData();
void Strings();
void TryAt();
void SomeMath();
void SwitchTry();

int main()
{
	/* cout (pronounced "see-out") is an object 
	used together with the insertion operator (<<) 
	to print text.*/
	// string str;
	// cout << "write some data\n"; //see-out
	// cin >> str; //see-in
	PrintData();
	Strings();
	TryAt();
	SomeMath();
	SwitchTry();
	return (0);
}
//instaed of using many (if value == 1) etc
void SwitchTry() 
{
	int day;
	cout << "Enter any number from 1 to 3: ";
	cin >> day;
	switch(day)
	{
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		default:
			cout << "your number doesn't match any option";
	}
	cout << "\n";
}

void SomeMath()
{
	cout << "Square root of 64 is: " << sqrt(64) << "\n";
  	cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
  	cout << "The natural logarithm of 2 is: " <<log(2) << "\n";
}

void TryAt()
{
	std::string var = "hello";
	std::cout << var.at(0);
	std::cout << "\n";
}

void Strings()
{
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName + " " + lastName;
	fullName = firstName.append("Smith");
	cout << fullName;
	cout << "\n";
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
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Enter some text: ";
	getline(cin, txt);
	cout << "The length of the txt string is: " << txt.length();
	cout << "\n";
}
