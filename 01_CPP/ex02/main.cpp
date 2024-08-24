/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:18:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 18:00:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strOriginal = "HI THIS IS BRAIN";
	string* stringPTR = &strOriginal;
	string &stringREF = strOriginal;

	cout << "Memory address of the string variable: " << &strOriginal << endl;
	cout << "Memory address held by stringPTR: " << stringPTR << endl;
	cout << "Memory address held by stringREF: " << &stringREF << endl;
	cout << "-------------------------------------------------------------\n";
	cout << "The value of the string variable: " << strOriginal << endl;
	cout << "The value pointed to by stringPTR: " << *stringPTR << endl;
	cout << "The value pointed to by stringREF: " << stringREF << endl;
	return (0);
}