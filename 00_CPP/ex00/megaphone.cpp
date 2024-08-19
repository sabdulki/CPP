
/* 
1) you can’t use any other external library. It means C++11 (and derived
forms) and Boost libraries are forbidden. 
2) friend keywords are forbidden.
3) You should be able to use each of your headers independently from others. Thus,
they must include all the dependencies they need. However, you must avoid the
problem of double inclusion by adding include guards. Otherwise, your grade will
be 0.
*/

#include <iostream>
#include <string>
using namespace std;

/*
class names in UpperCamelCase format. Files containing class code will
always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you
have a header file containing the definition of a class "BrickWall" standing for a
brick wall, its name will be BrickWall.hpp.
*/


int doUpp(string str)
{
	
}


int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1, i != ac, i++)
		{
			if (av[i])
			{
				doUpp(av[i]);
			}
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
}