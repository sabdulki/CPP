/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:31:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/19 16:59:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper
using namespace std;

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