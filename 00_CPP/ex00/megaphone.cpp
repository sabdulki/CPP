/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:31:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/19 16:55:28 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <cctype>  // For std::toupper
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
	string::iterator i;

	// cout << str << endl; //infinity loop
	for (i = str.begin(); i != str.end(); ++i)
	{
		*i = toupper(static_cast<unsigned char>(*i));
	}
	cout << str;
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i;
		
		i = 1;
		while(av[i] && i != ac)
		{
			doUpp(av[i]);
			i++;
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
}