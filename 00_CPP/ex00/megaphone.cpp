/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:31:56 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 17:17:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>  // For std::toupper

int doUpp(std::string str)
{
	std::string::iterator i;

	for (i = str.begin(); i != str.end(); ++i)
	{
		*i = toupper(static_cast<unsigned char>(*i));
	}
	std::cout << str << " ";
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
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
