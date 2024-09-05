/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:08:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:35:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{
	arrSize = 4;
	levelsArr = new std::string[arrSize];
	levelsArr[0] = "DEBUG";
	levelsArr[1] = "INFO";
	levelsArr[2] = "WARNING";
	levelsArr[3] = "ERROR";
	std::cout << "Default constructor called\n";
}

Harl::~Harl() 
{
	delete[] levelsArr;
	std::cout << "Default destructor called\n";
}

void Harl::debug( void )
{
	std::cout << "Debug message\n";
}

void Harl::info( void )
{
	std::cout << "Info message\n";
}

void Harl::warning( void )
{
	std::cout << "Warning message\n";
}

void Harl::error( void )
{
	std::cout << "Error message\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*pointersToFuncs[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	for (int i = 0; i < this->arrSize; i++)
	{
		if (level == this->levelsArr[i])
		{
			(this->*pointersToFuncs[i])();
			return ;
		}
	}
	std::cout << "Wrong type\n";
	return ;
}
