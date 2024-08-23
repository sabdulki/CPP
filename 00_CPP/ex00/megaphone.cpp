/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:31:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/23 18:16:08 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper
using namespace std;

int doUpp(string str)
{
	string::iterator i;

	for (i = str.begin(); i != str.end(); ++i)
	{
		*i = toupper(static_cast<unsigned char>(*i));
	}
	cout << str << " ";
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i;
		
		i = 1;
		for (i = 1; av[i] && i != ac; i++)
			doUpp(av[i]);
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}
